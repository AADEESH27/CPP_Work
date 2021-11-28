#include<iostream>
#include<string>
using namespace std;

int main(){

    string str="WELCOME";
    int counter=0;
    string::iterator it;
    for( it=str.begin();it!=str.end();it++){
        counter++;
        *it=*it+32;
        cout<<*it;
    }
    cout<<endl;
    cout<<"Length of the given string is: "<<counter<<endl;
    
    return 0;
}