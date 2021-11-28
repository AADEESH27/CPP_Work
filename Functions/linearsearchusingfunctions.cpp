#include<iostream>
using namespace std;

int Search(int A[],int n,int key)
{
    for(int i=0;i<n;i++)
        if(key==A[i])
        return i;
    return 0;
}
    
int main()
{
    int A[]={2,4,5,7,10,9,13};
    int key;
    cout<<"Enter an Element to be Searched:";
    cin>>key;
    int index=Search(A,7,key);

    cout<<"Element found at index :"<<index<<endl;

}