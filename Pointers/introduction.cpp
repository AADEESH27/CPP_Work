// #include<iostream>
// using namespace std;

// int main(){

// int x=100;
// //decleration of pointer stores the address of the data
// int *p;
// //initialization of pointer 
// //p is pointing to the data stored in x
// p=&x;
// //The two steps can  be combined by 
// //int *p=&x;
// cout<<x<<endl;
// cout<<&x<<endl;
// cout<<*p<<endl;
// cout<<p<<endl;
// cout<<&p;



//     return 0;
// }
//*p points towards the data whose address is stored in p

#include <iostream>
using namespace std;

int main() {

	int n;
	cout<<"Enter the number of elements in the array : ";
	cin>>n;
	int arr[n];

	cout<<"Enter elements of the array : ";
	for(int i = 0; i < n; i++){
		cin>>arr[i];
	}

	int *ptr = arr;

    cout<<"The array is { ";
	for(int i = 0; i < n; i++){

		cout<<arr[i]<<" ; ";
	}
    cout<<"}"<<endl;

    int m;
	cout<<"Enter Number to Search : ";
	cin>>m;

	for(int i = 0; i < n; i++){
		if(m == (*ptr)){
			cout<<"Element Found at Index : "<<i;
			return i;
		}
		else{
			ptr++;
		}
	}
	cout<<"Element Not Found";
   return 0;
}