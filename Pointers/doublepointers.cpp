#include<iostream>
using namespace std;

int main(){

/*int x=4;
int *p_x=&x;

cout<<x<<endl;
cout<<p_x<<endl;

*p_x=7;
cout<<*p_x<<endl;
cout<<p_x+1<<endl;
*/ 
//double pointer stores the address of the other pointer
//only first bit is stored as an address in the pointer 
//eg.1-4
//x= [5]
//&x=[1]

int y=5; 
int *p_y=&y;
int **p_p_y=&p_y; 

cout<<y<<endl;
cout<<&y<<endl;
cout<<p_y<<endl;
cout<<*p_y<<endl;
cout<<p_p_y<<endl;
cout<<&p_y<<endl;
cout<<*p_p_y<<endl;
cout<<**p_p_y<<endl;
}


