#include<bits/stdc++.h>
using namespace std;

int main(){

    double num1, num2, ans;

    char operation;

    cin>> num1;
    while(cin>>operation>>num2){
        if(operation == '+'){
            ans = num1+num2;
        }
        else if(operation == '-'){
            ans = num1-num2;
        }
        else if(operation == '*'){
            ans = num1*num2;
        }
        else if(operation == '/'){
            if(num2 == 0){
                cout<< "Division is not possible"<<endl;
                continue;
            }
            else ans = num1/num2;
        }
        else{
            cout<<"Invalid operator"<<endl;
            continue;
        }

        num1 = ans;

        cout<< ans <<endl;
    }

}   