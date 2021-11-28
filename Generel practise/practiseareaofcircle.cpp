#include <iostream>
#include<cmath>
using namespace std;
int main(){
    
    float radius,area;
    cout<<"Enter the radius of the circle:";
    cin>>radius;
    area=3.14*pow(radius,2.0);
    cout<<"The area of circle is"<<" "<<area;
    
    return 0;
}