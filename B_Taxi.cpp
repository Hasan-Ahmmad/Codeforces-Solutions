#include<bits/stdc++.h>
using namespace std;

int main(){

    int n; cin>>n;
    vector<int> s(n);
    int s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    for(int i=0; i<n; i++){
        int x; cin>>x;
        s[i] = x;
        
        if(x == 1) s1++;
        else if(x == 2) s2++;
        else if(x == 3) s3++;
        else s4++;
    }

    int ans = s4;
    if(s1<=s3){
        ans += s3;
        s1 = 0;
    }
    if(s1>s3){
        ans += s3;
        s1 -= s3;
    }
    
    if(s2>=2){
        ans += s2/2;
        s2 %= 2;
    }
    s1 += s2*2;

    if(s1 !=0){
        if(s1%4 == 0){
        ans += s1/4;
        }
        else ans += s1/4 +1;
    }

    
    cout<< ans <<endl;

}   