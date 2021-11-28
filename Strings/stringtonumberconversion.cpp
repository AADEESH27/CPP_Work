#include<iostream>
#include<cstring>
using namespace std;

int main(){

    char str1[]="2341";
    char str2[]="34.65";

    long int l=strtol(str1, NULL,10);
    float f=strtof(str2,NULL);

    cout<<l<<endl;
    cout<<f-34<<endl;

    
    return 0;
}