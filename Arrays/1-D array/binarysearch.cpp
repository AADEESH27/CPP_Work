#include<iostream>
using namespace std;
    
int main()
{   
    
    int  n;
    cout<<"Enter the number of elements of the array: ";
    cin>>n;
    
    int A[n];
    cout<<"Enter the elements of array: "; 
    
    for(int i=0;i<n;i++){
    	cin>>A[i];
        cout<<A[i]<<" ";
    }
    
    cout<<endl;
	
	int key;
	cout<<"Enter the Key: ";
	cin>>key;
    
    int l=0,h=n,mid;
	while(l<=h)
	{
		mid=(l+h)/2;
		if(key==A[mid])
		{
		cout<<"Element found at: "<<mid;
		return mid;
		}
		else if(key>A[mid]){
	    l=mid+1;
		}
		else if(key<A[mid]){
        h=mid-1;
		}
		
	}
	    
	cout<<"Element  found at: "<<mid;
	
	return 0;
	    
}