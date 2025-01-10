#include<iostream>
using namespace std;
//sum of numbers from 1 to n 1+2+3
int main(){
    int sum = 0;
    int n ;
     cin >> n;
    for( int i = 1; i <= n ; i++){//1+3+5=9 
        
        if (i%2!=0){
            sum = sum+i;
        }
    }
    cout << sum <<endl;
    return 0 ;
}