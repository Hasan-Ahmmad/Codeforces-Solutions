#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string S; cin>>S;
    bool flag=true;
    for(int i=1;i<S.size();i++){
        if(islower(S[i])){
            flag=false;
        }
    }
    if(flag){
        for(int i=0;i<S.size();i++){
            if(isupper(S[i])){
                S[i]=tolower(S[i]);
            }
            else{
                S[i]=toupper(S[i]);
            }
        }
    }
    cout<<S<<endl;
    return 0;
}
