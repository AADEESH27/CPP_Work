#include<iostream>
using namespace std;

class Rectangle 
{
    
    int length;
    int breadth;

    public:

    //Mutator
    void setLength (int inplength){
        if(inplength>=0)
        length=inplength;
        else
        length=0;
    }
    void setBreadth (int inpbreadth){
        if(inpbreadth>=0)
        breadth=inpbreadth;
        else
        breadth=0;
    }
    
    //Accessor
    int getLength (){
        return length;
    }
    int getBreadth (){
        return breadth;
    }

    int area(){
        return length*breadth;
    }
    int perimeter(){
        return 2*(length+breadth);
    }
    
};

int main(){

    Rectangle r;
    
    int l;  
    cout<<"Enter the length: ";
    cin>>l;
    r.setLength(l);

    int b;
    cout<<"Enter the breadth: ";
    cin>>b;
    r.setBreadth(b);
    
    cout<<"The entered length= "<<r.getLength()<<" m"<<endl;
    cout<<"The entered breadth= "<<r.getBreadth()<<" m"<<endl;

    cout<<"The perimeter = "<<r.perimeter()<<" m"<<endl;
    cout<<"The area = "<<r.area()<<" m^2"<<endl;

    return 0;
}
//Accessor and Mutator are collectively called as Property Function 