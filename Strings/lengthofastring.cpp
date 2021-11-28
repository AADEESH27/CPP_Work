#include<iostream>
#include<string>
#include<cstring>
using namespace std;

int main(){
    char greeting[]="Hello World";
    string str1="Hello World";
    cout<<str1.length()<<endl;
    cout<<strlen(greeting)<<endl;
    cout<<str1.size()<<endl;
    cout<<str1.capacity()<<endl;
    str1.resize(25);
    cout<<str1.size()<<endl;
    cout<<str1.capacity()<<endl;
    str1.max_size();
    cout<<str1.size()<<endl;
    
    return 0;
}