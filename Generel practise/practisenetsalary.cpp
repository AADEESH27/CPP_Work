#include <iostream>
using namespace std;
int main(){

    float netsalary,basepay,allowance,deductions;
    cout<<"Enter yor Base Pay:"<<endl<<"Enter yor Deductions:"<<endl<<"Enter yor Allowance:"<<endl;
    cin>>basepay,deductions,allowance;
    netsalary=basepay+basepay*((allowance/basepay)*100)-basepay*((deductions/basepay)*100);
    cout<<netsalary;
    return 0;
}