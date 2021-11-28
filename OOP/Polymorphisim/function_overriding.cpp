#include<iostream>
using namespace std;

class Parent
{
    public:
    void display(){
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

    Parent p;
    p.display();
    cout<<endl;
    Child c;
    c.display();

    return 0;
}
