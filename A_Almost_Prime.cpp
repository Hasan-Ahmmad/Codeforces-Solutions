#include<bits/stdc++.h>
using namespace std;

bool Prime(int n){

    if(n<2) return false;
    for(int i= 2; i*i<=n; i++){
        if(n%i ==0){
            return false;
        }
    }
    return true;
}

int main(){

    int n; cin>>n;

    int ans = 0;
    for(int i=1; i<=n; i++){
        int cnt=0;
        for(int j=1; j<=i; j++){
            if(i%j == 0){
                if(Prime(j)){
                    cnt++;
                }
            }
        }

        if(cnt == 2){
            ans++;
        }
    }

    cout<< ans <<endl;



}   