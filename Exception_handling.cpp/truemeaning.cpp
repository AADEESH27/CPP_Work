#include<iostream>
using namespace std;
    
int division (int x=0,int y=0){

    if (y==0)
        throw 'A';
    return x/y;
}

int main()
{
	int x=10,y=5,z;
	    
	try
	{	
        z=division(x,y);
		cout<<z<<endl;
	}
	    
	catch(char e)
	{
		cout<<"Division by Zero not possible , ERROR CODE "<<e<<endl;
	}
	        
	cout<<"Bye"<<endl;
	    
}