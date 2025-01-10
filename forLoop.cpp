#include<iostream>
using namespace std;
//sum of numbers from 1 to n 1+2+3
int main(){
    int sum = 0;
    int n ;
     cin >> n;
    for( int i = 1; i <= n ; i++){
        
        sum = sum +i ;
    }
    cout << sum <<endl;
    return 0 ;
}