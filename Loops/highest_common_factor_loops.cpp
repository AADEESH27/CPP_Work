#include<iostream>
using namespace std;
int main(){

    int n,m;
    cout<<"Enter number 1: ";
    cin>>n;
    cout<<"Enter number 2: ";
    cin>>m;
    while(m!=n){
        if(m>n)
        m=m-n;
        else
        n=n-m;
    }
    cout<<m;
    return 0;
}