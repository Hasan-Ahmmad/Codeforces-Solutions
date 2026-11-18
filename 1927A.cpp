#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin>>t;
    while(t--){
    
        int n; cin>>n;
        
        string s; cin>>s;
        int i=0, j=n-1;
        while(true){
            if(s[i] !='B'){
                i++;
            }
            else break;
        }
        while(true){
            if(s[j] !='B'){
                j--;
            }
            else break;
        }

        cout<<(j-i)+1<<endl;
    
    }
    return 0;
}
