#include<iostream>
using namespace std;

class Complex 
{
   private:  
   int real;
   int img;

   public:

   Complex (int r=0,int i=0)
    {
     this-> real =r;
     this-> img =i;
    }

    void display(){
        cout<<real<<" + "<<img<<" i"<<endl;     
    }

   friend Complex operator+ (Complex C1, Complex C2);

};
Complex operator+(Complex C1, Complex C2){
    Complex temp;
    temp.real=C1.real+C2.real;
    temp.img=C1.img+C2.img;
    return temp;
}

int main(){

    Complex C1(5,3);
    Complex C2(7,3);
    Complex C3;
    
    C3=C1+C2;

    C3.display();

    return 0;
}