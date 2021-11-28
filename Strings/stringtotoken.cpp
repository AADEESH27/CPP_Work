#include<iostream>
#include<cstring>
using namespace std;

int main(){

    char str1[30]="x=10;y=78;z=33;";
    char *token=strtok(str1,";");

    while(token!=NULL){
        cout<<token<<" ";
        token=strtok(NULL,";");
        cout<<endl;
    }
    
    
    
    return 0;
}