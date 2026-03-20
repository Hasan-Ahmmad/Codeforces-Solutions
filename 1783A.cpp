#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin>>t;
    while(t--){
    
        int n; cin>>n;
        vector<int> a(n);
        set<int> st;

        for(int &i : a){
            cin>>i;
            st.insert(i);
        }

        int sum=0;
        bool flag=true;
        for(int i=0; i<n; i++)
        {
            if(sum != a[i]){
                sum+=a[i];
            }
            else{
                flag=false;
                break;
            }    
        }

        if(st.size()==1){
            cout<<"NO"<<endl;
            continue;
        }
        if(flag){
            cout<<"YES"<<endl;
            for(int i : a){
                cout<<i<<" ";
            }
            cout<<endl;
        }
        else{

            swap(a[0],a[n-1]);
            cout<<"YES"<<endl;
            for(int i : a){
                cout<<i<<" ";
            }
            cout<<endl;
        }
    
    }
    return 0;
}
