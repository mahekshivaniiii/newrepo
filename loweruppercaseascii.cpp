#include<iostream>
using namespace std;

int main(){
    char ch;
    cin >> ch;
    if(ch >= 97 && ch <= 122){
        cout << "lower" << endl;
    }
    else{
        cout << "upper" << endl;
    }
    return 0;
}