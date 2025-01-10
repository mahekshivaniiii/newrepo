#include<iostream>
using namespace std;

int main(){
    int sum = 0 ;
    int n ;
    cin >> n ;
    int count =1 ;
    while( count<= n){
        sum = sum+count ;
        count ++;
    }
    cout << sum << endl;
    return 0;

}