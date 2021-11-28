#include<iostream>
using namespace std;

template<class temp>
/*temp sum (temp x,temp y,temp z=0){
    return x+y+z;
}*/

temp Max (temp x=0,temp y=0,temp z=0){
    return x>y&&x>z? x:(y>z?y:z);
}

int main(){
    cout<<Max(75,555);
    
    return 0;
}