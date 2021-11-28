#include<iostream>
using namespace std;
    
class Outer{
public:
	 class Inner
     {
	 public:
	 void display()
	 {
	 cout<<"Display of Inner"<<endl;
	 }
    };

    public:
	Inner i;
	void fun()
	{
		i.display();
	}
    
};
    
int main()
{
	Outer::Inner i;
    i.display();
}
  