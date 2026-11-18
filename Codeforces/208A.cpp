#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string S; cin>>S;
    for(int i=0;i<S.size();)
    {
        if(S.substr(i,3)=="WUB"){
            S[i]=' ';
            S.erase(i+1,2);
        }
        else i++;
    }
    for(int i=0;i<S.size();){
        if(S[i]!=' ') break;
        else S.erase(i,1);
    }
    cout<<S<<endl;
    return 0;
}
