#include<iostream>
using namespace std;

int main(){

    int A[5]={2,4,6,8,10};
    int B[5]={8,3,5,7,9};
    int *p_a=A;
    int j=*p_a;
    int *p_b=B;
    int dif;
    dif=j - *p_b;
    //cout<<dif;
    p_a++;
    cout<<*p_a<<endl;
    cout<<*p_a+2<<endl;



    return 0;
}