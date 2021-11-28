#include<iostream>
using namespace std;
    
int main()
{
	int x=10,y=0,z;
	    
	try
	{
		if(y==0)
		throw 'A';
		z=x/y;
		cout<<z<<endl;
	}
	    
	catch(char c)
	{
		cout<<"Division by Zero is not possible , ERROR CODE "<<c<<endl;
	}
	        
	cout<<"Bye"<<endl;
	    
}