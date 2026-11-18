#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin>>t;
    while(t--){
    
        int x,k; cin>>x>>k;

        if(x%k==0){
            cout<<2<<endl;
            cout<<x-1<<" "<<1<<endl;
        }
        else{
            cout<<1<<endl;
            cout<<x<<endl;
        }
    
    }
    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;
// #define endl '\n'

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
    
//     int t; cin>>t;
//     while(t--){
    
//         int x,k; cin>>x>>k;

//         int count=1;
//         for(int i=x; i>=0; i--){
//             if(i%k == 0){
//                 count++;
//             }
//             else{
//                 cout<<count<<endl;
//                 if(i==x){
//                     cout<<i<<endl;
//                     break;
//                 }
//                 else{
//                     cout<<i<<" "<<x-i<<endl;
//                     break;
//                 }
//             }
//         }
    
//     }
//     return 0;
// }
