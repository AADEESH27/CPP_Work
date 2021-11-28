#include<iostream>
using namespace std;
int main(){

int i,j,n;
int k;
cout<<"Enter the number of rows: ";
cin>>n;

for(i=1;i<=n;i++){

for(j=1;j<=(n-i);j++){
   cout<<"  ";
}
k=i;
for(;j<=n;j++){
   cout<<k<<" ";
   k--;
}
 
k=2;
for( ;j<(n+i);j++){
   cout<<k<<" ";
   k++;
}
 
   cout<<endl;
}
   
   return 0;
}