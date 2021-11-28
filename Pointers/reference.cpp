#include<iostream>
using namespace std;

int main(){
//it is the nothing but assigning a nickname to the same variable
int x=12;
int &y=x;
cout<<x<<endl;
cout<<y<<endl;

x++;
y=x+x+x;

cout<<x<<endl;
cout<<y<<endl;

    return 0;
}