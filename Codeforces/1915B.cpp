#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin>>t;
    while(t--){
    
        int countA=0, countB=0, countC=0;
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                char c; cin>>c;
                if(c=='A') countA++;
                else if(c=='B') countB++;
                else if(c=='C') countC++;
            }
        }

        if(countA == 2) cout<<'A'<<endl;
        else if(countB == 2) cout<<'B'<<endl;
        else cout<<'C'<<endl;
    
    }
    return 0;
}
