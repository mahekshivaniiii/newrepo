#include<iostream>
using namespace std;
int main(){
   // 5 7 11
   int count = 0;
   int n ;
   cin >> n;
   for(int i = 2; i*i<=n ; i ++){
    if(n%i==0){
        count ++;
    }
   }
   if(count == 2){
    cout << "Prime" << endl;
   } 
   
   else{
    cout << "Non-Prime" << endl;
   }
    return 0;
}