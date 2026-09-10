#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin>>t;
    while(t--){
    
        int n, m; cin>>n>>m;
        
        char a[n][m];
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin>>a[i][j];
            }
        }

        int ans1 = 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(a[i][j] == '#'){
                    ans1 = j+1;
                    break;
                }
            }
        }

        int ans2 =0, com = INT_MIN;
        for(int i=0; i<n; i++){
            int cnt = 0;
            for(int j=0; j<m; j++){
                if(a[i][j] == '#'){
                    cnt++;
                }
            }
            if(cnt>com){
                com = cnt;
                ans2 = i+1;
            }
        }

        cout<< ans2 <<" "<< ans1 <<endl;

    
    }
    return 0;
}