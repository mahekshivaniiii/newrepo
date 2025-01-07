#include<iostream>
using namespace std;

int main(){
   int age ;
   cout << "Please enter your age " << endl;
   cin >> age;
   if( age >= 18){
    cout << "you can vote" << endl;
   }
   else{
    cout << "Sorry you are underage " << endl;
   }
    return 0;

}