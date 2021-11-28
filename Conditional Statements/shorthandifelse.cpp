#include<iostream>
using namespace std;
int main(){
    float time;
    cin>>time;
    string mauj=(time>15)?"classes are over":"classes are not over";
    cout<<mauj;  
    return 0;
}