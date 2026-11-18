#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin>>t;
    while(t--){
    
        int a,b,c; cin>>a>>b>>c;
        for(int i=0; i<5; i++){

            int num=min({a,b,c});
          
            if(a==num) a++;
            else if(b==num) b++;
            else c++;
        }

        cout<<a*b*c<<endl;
    
    }
    return 0;
}
