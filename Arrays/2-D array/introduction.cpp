#include<iostream>
using namespace std;
int main(){
int row , col ;
cout<<"Enter the number of rows: ";
cin>>row;
cout<<"Enter the number of col: ";
cin>>col;
cout<<endl;

int A[row][col];
cout<<"Enter the elements of the array: ";
for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        cin>>A[i][j];
    }
}

cout<<endl;

for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        cout<<A[i][j]<<" ";
    }
    cout<<endl;
}


return 0;
}
