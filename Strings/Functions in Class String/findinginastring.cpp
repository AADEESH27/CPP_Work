#include<iostream>
#include<string>
using namespace std;

int main(){

    string str1="hello";
    string str2="llo";
    
    cout<<str1.find('e')<<endl;
    cout<<str1.rfind('o')<<endl;
    
    cout<<str1.find_first_of('h')<<endl;
    cout<<str1.substr(0,str1.length())<<endl;
    cout<<str1.find_last_of('h')<<endl;
    

    return 0;
}