#include <iostream>
#include<cmath>
using namespace std;
int main(){
    
    float root1,root2,b,a,c;
    
    cout<<"enter a:";
    cin>>a;
    cout<<"enter b:";
    cin>>b;
    cout<<"enter c:";
    cin>>c;
    cout<<"The roots of x are:";
    root1=(-b+ sqrt(b*b-4*a*c))/(2*a);
    root2=(-b- sqrt(b*b-4*a*c))/(2*a);
    cout<<root1<<endl<<root2;

    return 0;
}