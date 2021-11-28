#include<iostream>
#include<string>
using namespace std;

int main(){
    
    string str1;
    string str2;
    char str3[5]={'\0'};

    cout<<"Enter the string1 : ";
    getline(cin,str1);
    cout<<"Enter the string2 : ";
    getline(cin,str2);
    cout<<str1<<endl;
    cout<<str2<<endl;
  
    str1.swap(str2); 
   
    cout<<str1<<endl;
    cout<<str2<<endl;
 
    str1.copy(str3,2);

    cout<<str1<<endl;
    cout<<str2<<endl;
    cout<<str3<<endl;
    
    return 0;
}