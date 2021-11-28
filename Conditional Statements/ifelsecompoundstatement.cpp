#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age: ";
    cin>>age;
    if(12<age || age<50){
        cout<<"offer eligible";
    }
    else{
        cout<<"not eligible";
    }
    return 0;
}