#include<iostream>
using   namespace   std;
int main(){
    int n,a,b;
    cout<<"Enter the limits where a<b : ";
    cin>>a>>b;
    string numbernames[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};

    for(n=a;n<=b;n++){
        if(n>9){
            if(n%2==0){
                cout<<"even"<<endl;
            }
            else{
                cout<<"odd"<<endl;
            }
            
        }
        else{
            cout<<numbernames[n]<<endl;
        }
    }
    return  0;
}