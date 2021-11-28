//is used to over come the problem of writing same function again and again for different datatypes
#include<iostream>
using namespace std;

template<class temp>
temp maximum (temp x,temp y){
    if(x>y)
       return x;
    else
       return y;
}

int main(){
    cout<<maximum(4,7)<<endl;
    cout<<maximum(5.4f,2.3f);

    return 0;
}