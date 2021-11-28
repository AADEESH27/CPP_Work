#include<iostream>
using namespace std;

class Rectangle 
{
    public:

    int length;
    int breadth;
    
    //function declared in class only
    inline int area();

    inline int perimeter();
    

};  //To make outside function inline just write inline befor the decleration of function in the class
    //outside class method
    int Rectangle::area(){
    return length*breadth;
    }
    int Rectangle::perimeter(){
    return 2*(length+breadth);
    }
    

int main(){

    /*Rectangle r;
    Rectangle *p;
    p=&r;
    
    cin>>p->length;
    cin>>p->breadth;
    
    cout<<p->perimeter()<<endl;
    cout<<p->area();
    
    */
    
    Rectangle *q=new Rectangle;
    cin>>q->length;
    cin>>q->breadth;

    cout<<q->perimeter()<<endl;
    cout<<q->area();

    return 0;
}

