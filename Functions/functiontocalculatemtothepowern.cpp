#include<iostream>
using namespace std;

int pow (int m,int n){
    int p=1;
    for(int i=1;i<=n;i++){
        p=m*p;
    }
    return p;
}

int main(){
   
    int m,n;
    cout<<"Enter the number: ";
    cin>>m;
    cout<<"Enter the power: ";
    cin>>n;
   
    cout<<pow(m,n);

    return 0;
}

