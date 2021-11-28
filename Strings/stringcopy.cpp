#include<iostream>
//#include<cstring>
#include<string>
using namespace std;

int main(){

    //char str1[]="Good";
    //char str2[]="";
    //strcpy(str2,str1);

    //cout<<str2;

    string st1="hello";
    char st2[100]={};

    st1.copy(st2,st1.length());
    cout<<st2;
    return 0;
}