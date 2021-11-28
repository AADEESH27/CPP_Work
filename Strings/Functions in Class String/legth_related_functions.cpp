#include<iostream>
#include<string>
using namespace std;

int main(){

    string greeting;
    
    cout<<"Enter the string: ";
    getline (cin,greeting);
    //greeting.erase();
    cout<<greeting.length()<<endl;
    cout<<greeting.capacity()<<endl;
    cout<<greeting.max_size()<<endl;
    greeting.resize(60);
    cout<<greeting.capacity();
    return 0;
}