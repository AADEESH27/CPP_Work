#include<iostream>
using namespace std;

class Rectangle
{
  public:

  int length;
  int breadth;

  int area(){
    return (length*breadth);
  }
  int perimeter(){
    return (2*(length+breadth));
  }

};

int main(){

  Rectangle *p=new Rectangle();

  cin>>p->length;
  cin>>p->breadth;
 
  cout<<p->perimeter()<<endl;
  cout<<p->area();

return 0;
}