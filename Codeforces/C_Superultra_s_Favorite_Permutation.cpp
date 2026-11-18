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

        if(n<5){
            cout<< -1 <<endl;
            continue;
        }

        vector<int> ans;
        for(int i=1; i<=n; i+=2){
            if(i == 5){
                continue;
            }
            else{
                ans.push_back(i);
            }
        }
        ans.push_back(5);
        ans.push_back(4);

        for(int i=2; i<=n; i+=2){
            if(i == 4){
                continue;
            }
            else{
                ans.push_back(i);
            }
        }

        for(int i : ans){
            cout<< i<<" ";
        }
        cout<<endl;
    
    }
    return 0;
}