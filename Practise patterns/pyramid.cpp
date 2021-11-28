#include<iostream>
#include<cmath>
using namespace std;
int main(){ 

int n;

cout<<"The number of rows of pyramid: ";
cin>>n;
//MY APPROACH

for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
      if((i+j)>n){
        cout<<"* ";
      }
      else{
        cout<<" ";
      }
    }
  cout<<endl;
}
  return 0;
}


 /* for (int i = 1; i <= n; i++) {
    for (int space = n-i; space>=1; space--) {
      cout << " ";
    } 
    for (int j = 1; j <= i; j++) {
      cout << "* ";
    }
    cout << endl;
  }

 return 0;
}*/