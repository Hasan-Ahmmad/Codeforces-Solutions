#include<bits/stdc++.h>
using namespace std;

int main(){

    int n; cin>>n;
    bool flag1 = false, flag2 = false;

    for(int i=0; i<n; i++){
        
        int a, b;
        cin>> a>> b;
        if(a<b){
            flag1 = true;
        }
        if(b>a){
            flag2 = true;
        }
    }

    if(flag1 && flag2){
        cout<< "Happy Alex"<<endl;
    }
    else cout<< "Poor Alex"<<endl;

}   