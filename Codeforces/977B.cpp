// brute force
#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    string s;
    cin>>n>>s;

    int freq = 0;
    char ans1, ans2;
    for(int i=0; i<n-1; i++){
        int Count = 0;
        for(int j=0; j<n-1; j++){
            if(s[i] == s[j] && s[i+1] == s[j+1]){
                Count++;
            }
        }
        if(Count>freq){
            freq = Count;
            ans1 = s[i];
            ans2=s[i+1];
        }

    }

    cout<<ans1<<ans2<<endl;

}   

using map----------------------------------------------------------------------------------
#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    string s;
    cin>>n>>s;

    int freq = 0;
    string ans;

    map<string, int> mp;

    for(int i =0; i<n-1; i++){
        string temp = "";
        temp +=s[i];
        temp +=s[i+1];

        mp[temp]++;

        if(mp[temp]> freq){
            freq = mp[temp];
            ans = temp;
        }
    }

    cout<<ans<<endl;

}   
