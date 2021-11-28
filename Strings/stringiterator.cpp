#include<iostream>
#include<string>
using namespace std;

int main(){
    
    string str="hello";
    string::iterator it;

   for(it=str.begin(); it!=str.end();it++){
        *it=*it-32;
        cout<<*it;
        //cout<<endl;
    }

    //using simple for loop    
    /* for(int i=0;str[i]!='\0';i++){
        cout<<str[i];
    }*/
   

    return 0;
}