#include<iostream>
using namespace std;

class Parent
{
    public:
    virtual void display(){
        cout<<"function of parent";
    }

};
class Child : public Parent
{
    public:
    void display(){
        cout<<"function of child";
    }
};

int main(){

    Parent *p= new Child();

    p->display();
    cout<<endl; 
       
    return 0;
}
