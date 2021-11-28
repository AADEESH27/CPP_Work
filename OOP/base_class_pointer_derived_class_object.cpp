#include<iostream>
using namespace std;

class Base
{
    public:
    void fun1(){
        cout<<"Function of Base \n";
    }
};

class Derived : public Base
{
    public:
    void fun2(){
        cout<<"Function of Derived \n";
    }
};

int main(){
    
    //Base b;
    Derived d;
    //Derived *p=&b;
    Base *p=&d;
    
    p->fun1();
    //p->fun2();

    return 0;
}