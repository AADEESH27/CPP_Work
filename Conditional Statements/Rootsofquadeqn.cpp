#include <iostream>
#include<cmath>
using namespace std;
int main(){
    
    float root1,root2,b,a,c;
    long long int d;
    
    cout<<"enter a:";
    cin>>a;
    cout<<"enter b:";
    cin>>b;
    cout<<"enter c:";
    cin>>c;

    d=(b*b)-(4*a*c);

    if(d>=0){
    cout<<"real roots"<<endl;
    cout<<"The roots of x are:"<<endl;
    root1=(-b+ sqrt(b*b-4*a*c))/(2*a);
    root2=(-b- sqrt(b*b-4*a*c))/(2*a);
    cout<<root1<<endl<<root2;
    }
    else{
        cout<<"no roots";
    }

    return 0;
}