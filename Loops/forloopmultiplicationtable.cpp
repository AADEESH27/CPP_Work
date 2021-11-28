#include<iostream>
#include<cmath>
using namespace std;
int main(){

   int multiplicand,multiplier;
   cout<<"Enter the multiplier :  "; 
   cin>>multiplier;
   for(multiplicand=1;multiplicand<=10;multiplicand++){
       cout<<multiplier<<" x "<<multiplicand<<" = "<<multiplicand*multiplier<<endl;
      
    }
   return 0;
}