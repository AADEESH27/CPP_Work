#include<iostream>
using namespace std;
int main()

{  
    
    int n,A[n],sumeven=0,sumodd=0;
    cout<<"Enter the number of elements of the array: ";
    cin>>n;
    cout<<endl;
    cout<<"Enter the element of the array: ";

    for(int i=0;i<n;i++){
        cin>>A[i];
    }

    for(int i=0;i<n;i++){
        if(A[i]%2==0){
            sumeven=sumeven+A[i];
        }
        else if(A[i]%2!=0){
            sumodd=sumodd+A[i];
        }
    }
    cout<<endl;
    cout<<"The sum of even elements is: "<<sumeven<<endl;
    cout<<"The sum of odd elements is: "<<sumodd<<endl;

    if(sumeven>sumodd){
    cout<<sumeven<<" is greater";
    }
    else if(sumeven<sumodd){
    cout<<sumodd<<" is greater";
    }
    else{
        cout<<"Both are equal";
    }

    return 0;
}