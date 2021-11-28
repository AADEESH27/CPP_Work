#include<iostream>
using namespace std;

class Rectangle
{
   int length;
   int breadth;

   public:
  inline Rectangle(int length=0, int breadth=0){
    setLength(length);
    setBreadth(breadth);
    }
  inline  void setLength(int length);
  inline  void setBreadth(int breadth);
  inline  int getLength();
  inline  int getBreadth();
  inline  int perimeter();
  inline  int area ();

};
    void Rectangle::setLength(int length){
        if(length>0)
        this->length = length;
        else
        length=0;
    }
    void Rectangle::setBreadth(int breadth){
        if(breadth>0)
        this->breadth = breadth;
        else
        breadth=0;
    }
    int Rectangle::getLength(){
        return this->length;
    }
    int Rectangle::getBreadth(){
        return this->breadth;
    }
    int Rectangle::perimeter(){
        return 2*(length + breadth);
    }
    int Rectangle::area(){
        return length*breadth;
    }
class Cuboid : public Rectangle
{
   private:
   int height;

   public:
   Cuboid(int length=0,int breadth=0,int height=0) :Rectangle(length, breadth){
       this->height = height;
    //    setLength(length);
    //    setBreadth(breadth);
   }
   int setHeight(int height);
   int getHeight();
   int Volume();

}; 
   int Cuboid::setHeight(int height){
       if(height>0)
       this->height = height;
       else
       height =0;
   }
   int Cuboid::getHeight(){
       return this->height;
   }   
   int Cuboid::Volume(){
       return getLength()*getBreadth()*getHeight();
   }

int main(){
    
   Cuboid C1;
   int length,breadth,height;
   cout<<"Enter length: ";
   cin>>length;
   cout<<"Enter breadth: ";
   cin>>breadth;
   cout<<"Enter height: ";
   cin>>height;

   C1.setLength(length);
   cout<<C1.getLength()<<" m"<<endl;
   
   C1.setBreadth(breadth);
   cout<<C1.getBreadth()<<" m"<<endl;

   C1.setHeight(height);
   cout<<C1.getHeight()<<" m"<<endl;
   
   cout<<C1.Volume()<<" m2";

    return 0;
}