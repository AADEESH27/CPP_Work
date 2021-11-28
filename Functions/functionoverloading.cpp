//1. write a sum() function here to add 2 integer
//2. write a sum() function here to add 2 floats
//3. write a sum() function here to add 3 integer
/*#include<iostream>
using namespace std;

int sum (int x,int y){
    return x+y;
}
float sum (float x,float y){
    return x+y;
}
int sum (int x,int y,int z){
    return x+y+z;
}

int main(){
  
    cout<<sum(10,5)<<endl;
    cout<<sum(12.9f,8.3f)<<endl;
    cout<<sum(10,20,30)<<endl;

    return 0;
}*/


//1 write a Min() function here to Min of 2 integers
//2 write a Min() function here to Min of 3 integers
//3 write a Min() function here to Min of 2 floats
#include<iostream>
using namespace std;

int Min (int x,int y){
    if(x<y)
    return x;
    else
    return y;
}
int Min (int x,int y,int z){
    if(x<y&&x<z)
    return x;
    else if(y<z&&y<x)
    return y;
    else
    return z;
}
float Min (float x,float y){
    if(x<y)
    return x;
    else
    return y;
} 

int main(){

    cout<<Min(10,5)<<endl;
    cout<<Min(12,7,9)<<endl;
    cout<<Min(18.0f,9.0f)<<endl;

    return 0;
}