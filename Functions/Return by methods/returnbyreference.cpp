#include<iostream>
using namespace std;

int & fun (int &a){
    a=a*a;
    return a;
}

int main(){

    int x=45;
    int y=fun(x);
    cout<<x;

    return 0;
}