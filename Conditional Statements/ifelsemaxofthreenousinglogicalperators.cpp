#include <iostream>
using namespace std;
int main(){
 
    int number1,number2,number3;
    cout<<"Enter Number 1:";
    cin>>number1;
    cout<<"Enter Number 2:";
    cin>>number2;
    cout<<"Enter Number 3:";
    cin>>number3;

    if(number1>number2&&number1>number3){
        cout<<"The greatest is : "<<number1<<endl;
    }
    else{
        if(number2>number3){
            cout<<"The greatest is : "<<number2<<endl;
        }
        else{
            cout<<"The greatest is : "<<number3<<endl;
        }
    }
    return 0;
}