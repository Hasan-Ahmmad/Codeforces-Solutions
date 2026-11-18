#include<bits/stdc++.h>
using namespace std;

int main(){

    int a, b;
    cin>>a>>b;

    int ans = a, rem = 0;
    while(a>=b){
        ans += a/b;
        rem = a%b;
        a /= b;
        a += rem;
    }

    cout<< ans <<endl;
}   