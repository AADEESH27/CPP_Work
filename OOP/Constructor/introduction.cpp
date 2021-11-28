#include<iostream>
using namespace std;
class Rectangle 
{
    
    int length;
    int breadth;

    public:
    
    //Constructor Example
    
    /*Non Parameterized can be replaced with Parameterized Constructor using default argument funtion*/
    
    /*Parameterized*/Rectangle(int l=0,int b=0)
    {
        setLength(l);
        setBreadth(b);
    }
    
    /*Copy Constructor*/Rectangle(Rectangle &rect)
    {
      length=rect.length;
      breadth=rect.breadth;
    }
    
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

    Rectangle r1(23,33);
    Rectangle r2(r1);

    cout<<"The entered length of rectangle1 = "<<r1.getLength()<<" m"<<endl;
    cout<<"The entered breadth of rectangle1 = "<<r1.getBreadth()<<" m"<<endl;

    cout<<"The entered length of rectangle2= "<<r2.getLength()<<" m"<<endl;
    cout<<"The entered breadth of rectangle2 = "<<r2.getBreadth()<<" m"<<endl;


    cout<<"The perimeter of rectangle1 = "<<r1.perimeter()<<" m"<<endl;
    cout<<"The area of rectangle1 = "<<r1.area()<<" m^2"<<endl;
    
    
    cout<<"The perimeter of rectangle2 = "<<r2.perimeter()<<" m"<<endl;
    cout<<"The area of rectangle2 = "<<r2.area()<<" m^2"<<endl;

    return 0;
}