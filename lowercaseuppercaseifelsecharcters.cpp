#include<iostream>
using namespace std;
int main(){
    char ch;
    cin >> ch;
    if(ch >= 'a' && ch  <= 'z'){
        cout << "LOwercase"<< endl;

    }
    else{
        cout << "Uppercase" << endl;
    }

    return 0;
}