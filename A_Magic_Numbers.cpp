#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    string s = to_string(n);

    bool flag = true;
    for(int i=0; i<s.size(); i++){

        if(s[i] != '1' && s[i] !='4' ){
            flag = false;
            break;
        }
        else if(s[0] != '1'){
            flag = false;
            break;
        }    
        else if(s.find("444") != string::npos){
            flag = false;
            break;
        }
    }

    if(flag) cout<< "YES"<<endl;
    else cout<<"NO"<<endl;

}   