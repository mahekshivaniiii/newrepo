#include<iostream>
using namespace std;

int main(){
    // implict type casting or conversion which is done by compiler automatically char --> int 
    char grade = 'z';

    int value = grade ;
    cout << value << endl;

    //explict type casting which is done by programmers int --> double
    double value1 = 100.01 ;
    double value2 = 100.9909 ;
    int newvalue1 = (int)value1;
    int newvalue2 = (int)value2;
    cout << newvalue1 << endl << newvalue2 << endl; 


    
	return 0;
}
