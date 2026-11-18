#include<bits/stdc++.h>
using namespace std;

int main(){

    int a[3][3];
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>>a[i][j];
        }
    }

    int ans[3][3] ={0};
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            ans[i][j] += a[i][j];
            if(i-1>=0){
                ans[i][j] += a[i-1][j];
            }
            if(i+1<3){
                ans[i][j] += a[i+1][j];
            }
            if(j-1>=0){
                ans[i][j] += a[i][j-1];
            }
            if(j+1<3){
                ans[i][j] += a[i][j+1];
            }
        }
    }

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(ans[i][j]%2 == 0){
                cout<<1;
            }
            else cout<<0;
        }
        cout<<endl;
    }

}   