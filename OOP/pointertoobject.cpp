#include<iostream>
using namespace std;

class Rectangle 
{
    public:

    int length;
    int breadth;
    
    //function declared in class only
    int area();

    int perimeter(){
        return 2*(length+breadth);
    }

};  
    //outside class method
    int Rectangle::area(){
    return length*breadth;
    }


int main(){

    //Rectangle r;
    //Rectangle *p=&r;

    // Creating Object in heap
    Rectangle *p= new Rectangle;

    cin>>p->length;
    cin>>p->breadth;
    
    cout<<p->perimeter()<<endl;
    cout<<p->area();
    
    
    
 /*   Rectangle *q=new Rectangle;
    cin>>q->length;
    cin>>q->breadth;

    cout<<q->perimeter()<<endl;
    cout<<q->area();
*/
    return 0;
}