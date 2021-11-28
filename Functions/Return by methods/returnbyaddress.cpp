#include<iostream>
using namespace std;

// int * fun(int size){
//     int *p=new int[size];
//     for(int i=0;i<size;i++){
//         p[i]=i*2;
//     }
//     return p;
//     delete[] p;
// }

int [] sum(int arr[]){
    int sum = 0 ;
    for(int x : arr){
        x+ = 1;
    }
    return arr;
}

int main(){
    int arr[] = {0,1,2,3,4,5,6,7};
    cout<<sum(arr)<<endl;
    // int *q=fun(7);
    // for(int i=0;i<7;i++){
    //     cout<<q[i]<<" ";
    // }

    return 0;
}
