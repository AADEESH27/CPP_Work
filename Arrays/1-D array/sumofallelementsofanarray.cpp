#include<iostream>
using   namespace   std;
int main(){
int A[]={1,2,8,4,5,6,7},sum=0;
  for(auto x:A){
    sum=sum+x;
  }
  cout<<"The sum is : "<<sum;
return  0;
}
