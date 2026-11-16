#include<bits/stdc++.h>
using namespace std;

int main(){

    list<int> ll = {1,2,3};

    ll.resize(5,99);

    for(int i : ll){
        cout<< i<<" ";
    }
}   