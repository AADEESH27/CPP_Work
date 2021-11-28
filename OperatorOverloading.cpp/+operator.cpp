#include<iostream>
using namespace std;

class Complex 
{ 
  public:
  int real;
  int img;

    Complex(int real=0,int img=0){
        this->real = real;
        this->img = img;
    }

    Complex operator + (Complex C){
        Complex temp;
        temp.real=real+C.real;
        temp.img=img+C.img;
        return temp;
    } 
 
};

int main(){

    Complex C1(10,1);
    Complex C2(3,2);
    Complex C3;

    C3=C1+C2;
  
    cout<<C3.real<<" + "<<C3.img<<"i"<<endl;

    return 0;
}
