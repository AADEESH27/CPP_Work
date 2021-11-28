#include <iostream>
using namespace std;

void fun(int){
    cout<<"Hello World!";
}

int main() {
    
    void (*fun_ptr)(int) = &fun;
    (*fun_ptr)(10);
	
	return 0;
}
