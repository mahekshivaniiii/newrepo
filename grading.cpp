#include<iostream>
using namespace std;
// amrks >=90 --> A
// 80 - 90 --> B 
// < 90 --> C
int main(){

    int marks;
    cin >> marks;
    if(marks >= 90){
        cout << "A" << endl;
    }
    else if(marks > 80 && marks < 90 )
    {
        cout << "B" << endl;
    }
    else{
        cout << "C" << endl;
    }
    return 0;

}