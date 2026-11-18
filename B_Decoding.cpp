#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>> n;
    string s;
    cin>>s;

    string ans = "";
    ans += s[0];

    for(int i=1; i<n; i++){

        if((n-i)%2 == 0){
            ans.insert(0,1,s[i]);
        }
        else{
            ans.push_back(s[i]);
        }
    }

    cout<< ans <<endl;


}   