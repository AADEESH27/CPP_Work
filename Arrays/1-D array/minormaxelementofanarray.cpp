#include<iostream>
#include<cmath>
using namespace std;
int main(){
  /*  int A[6]={1,7,9,10,34,67},max=A[0];
    
    for(int i=1;i<=6;i++){
        if(max<A[i]){
           max=A[i];   
        }
    }
        cout<<max;
    return 0;
}*/

int B[8]={1,2,3,-4,5,6,-7,8},min=B[0];
   
    for(int i=1;i<=8;i++){
        if(min>B[i]){
            min=B[i];
        }
    } 
        cout<<min;
    return 0;
}