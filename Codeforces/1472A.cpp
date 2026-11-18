#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin>>t;
    while(t--){
    
        int w,h,n; cin>>w>>h>>n;
        int count1=0, count2=0;

        while(w%2 ==0 || h%2==0){
            if(w%2==0){
                count1++;
                w/=2;
            }
            if(h%2==0){
                count2++;
                h/=2;
            }
        }

        if(pow(2,count1+count2)>=n) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    
    }
    return 0;
}
