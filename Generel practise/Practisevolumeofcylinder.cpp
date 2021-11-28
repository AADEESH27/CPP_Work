#include <iostream>
#include<cmath>
using namespace std;
int main(){
  
    float volume,r,h;
    
    cout<<"Enter the radius:"<<endl;
    cin>>r;
    cout<<"Enter the height:"<<endl;
    cin>>h;
    cout<<"The volume is:"; 
    volume=(22.0/7)*r*r*h;
    cout<<volume;

    return 0;
}