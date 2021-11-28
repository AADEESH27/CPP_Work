#include<iostream>
using namespace std;
    
/*program for static data member

*/
class test
{
public:
    int a;
    static int count;
    test()
    {
	   a=10;
       count++;
    }
};
int test::count=0;
int main()
{
	test t1,t2;
	cout<<t1.count<<endl;
	cout<<t2.count<<endl;
	t1.count=25;
	cout<<t2.count<<endl;
	cout<<test::count<<endl;
}
/*
#include <iostream>
using namespace std;

class Student
{
	public:
    int roll;
    string name;
            
    static int addNo;
            
    Student(string n)
    {
        addNo++;
        roll=addNo;
        name=n;
    }
            
    void display()
    {
        cout<<"Name "<<name<<endl<<"Roll "<<roll<<endl;
    }
    
};
    
int Student::addNo=0;
int main()
{
    Student s1("John");
    Student s2("Ravi");
    Student s3("Khan");
    Student s4("Khan");
    Student s5("Khan");
    Student s6("Khan");

	s1.display();
    s6.display();
        
    cout<<"Number Admission "<<Student::addNo<<endl;
        
} */