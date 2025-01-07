#include<iostream>
using namespace std;

int main(){
    int num1 , num2;
    cout << "enter number 1" << endl;
    cin >> num1 ;
    cout << "Enter number 2 " << endl;
    cin >> num2 ;
    char op ;
    cout << "Enter the operation you wanna perform " << endl;
    cin >> op;
    if (op=='+'){
        cout << num1+num2 << endl;
    }
    else if(op=='-'){
        cout << num1-num2 << endl;
    }
    else if(op=='*'){
        cout << num1*num2 << endl;
    }
    else if(op=='/'){
        cout << num1/num2 << endl;
    }
    else{
        cout << num1%num2 << endl;
    }
}