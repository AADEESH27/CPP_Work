#include<iostream>
using namespace std;
int main(){

int A[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
int B[4][3]={1,2,3,4,5,6,7,8,9,10,11,12};
int C[4][3];

for(int i=0;i<4;i++){
    for(int j=0;j<3;j++){
        C[i][j]=A[4][3]+B[4][3];
        cout<<C[i][j]<<" ";
    }
    cout<<endl;
}


return 0;
}
