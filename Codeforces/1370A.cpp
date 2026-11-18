#include<bits/stdc++.h>
using namespace std;

// int GCD(int a, int b) // <== brute force
// {
//     int ans=1;
//     for(int i=1;i<=min(a,b) ; i++)
//     {
//         if(a%i==0 && b%i==0)
//         {
//             if(i>ans) ans=i;
//         }
//     }
//     return ans;
// }


// int GcD(int a, int b) // <== euclidean algorithm
// {
//     if(b==0) return a;
//     else return GcD(b,a%b);
// }
 
// build in ==> gcd(a,b);

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        cout<<n/2<<endl; // yeah that's the all!
    }
    return 0;
}
