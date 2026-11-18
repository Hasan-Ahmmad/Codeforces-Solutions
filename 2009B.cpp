#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin>>t;
    while(t--){
    
        int n; cin>>n;

        char a[n][4];
        vector<int> vec;

        for(int i=0; i<n; i++){
            for(int j=0; j<4; j++){
                cin>>a[i][j];
                if(a[i][j] == '#'){
                    vec.push_back(j+1);
                }
            }
        }

        reverse(vec.begin(), vec.end());

        for(int i : vec){
            cout<<i<<" ";
        }
        cout<<endl;

    }
    return 0;
}
