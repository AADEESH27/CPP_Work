#include<iostream>
using namespace std;
int main(){
    
    int n,i=2,sum=0;
    cout<<"Enter the no.:"<<" ";
    cin>>n;
    do{
        sum = sum+i;
        i++;
    }
     while(i<=n);
    cout<<"The sum is : "<<sum<<endl;
    return 0;
}