#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin>>t;
    while(t--){
    
        int n;
        cin>>n;

        string s;
        cin>>s;

        int Count1=1, Count2=1;
        int ans1=0, ans2=0;

        for(int i=0; i<n; i++){
            if(s[i]=='<'){
                if(s[i+1]=='<'){
                    Count1++;
                }
                else{
                    ans1 = max(ans1, Count1);
                    Count1 =1;
                }
            }
            else{
                if(s[i+1] == '>'){
                    Count2++;
                }
                else{
                    ans2 = max(ans2, Count2);
                    Count2=1;
                }
            }
        }

        cout<<max(ans1,ans2) + 1<<endl;
      
    }
    return 0;
}
