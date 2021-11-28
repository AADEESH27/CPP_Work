#include <iostream>
#include<string>
using namespace std;

int main(){
    char s[]="hello";
    char h[]={'h','e','l','l','o','\0'};
    char *j="hello";
    string greeting="hello";

    cout<<greeting<<endl;
    cout<<j<<endl; 
    cout<<h<<endl;
    cout<<s<<endl;
    
    return 0;
}