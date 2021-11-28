#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the numbers: ";
    cin>>a>>b;
    cout<<"Enter the case: ";
    cin>>c;

    switch (c)
    {
    case 1:cout<<"sum:"<<a+b;
    break;
    case 2:cout<<"differnce:"<<a-b;
    break;
    case 3:cout<<"product:"<<a*b;
    break;
    case 4:cout<<"quotient:"<<a/b;
    break;
    }
   
    return 0;
}