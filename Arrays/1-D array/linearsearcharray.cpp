#include<iostream>
using namespace std;

int main()
{ 

int n;
 
cout<<"Enter the number of elements in the array: ";
cin>>n;

int A[n]; 
cout<<"Enter the elements of the array: ";
for(int i=0;i<n;i++){
    cin>>A[i];
}   

int key;
cout<<"Enter the element to be searched: "; 
cin>>key;

for(int i=0;i<=(n-1);i++){
    if(key==A[i]){
    cout<<"The element is found at index: "<<i;
    return i;
    }
} 
    cout<<"The element is not found";
    return 0;
}