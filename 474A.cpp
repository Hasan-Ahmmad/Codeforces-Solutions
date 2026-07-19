#include<bits/stdc++.h>
using namespace std;

int main(){

    char c;
    string s;

    cin>>c>>s;

    string kb = "qwertyuiopasdfghjkl;zxcvbnm,./";

    for(char i : s){
        int pos = kb.find(i);

        if(c=='R'){
            cout<<kb[pos-1];
        }
        else cout<<kb[pos+1];
    }
    cout<<endl;

}   
