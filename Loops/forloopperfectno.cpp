# include<iostream>
using namespace std;
int main()
// A number is a perfect number if the sum of the factors of the number excluding the number itself is equal to the number itself
{
    int i,n,sum=0;
    cout<<"Enter the number : ";
    cin>>n;
    for(i=1;i<n;i++){
        if(n%i==0){
            sum=sum+i;
            cout<<i<<" ";
        }
    }   
        cout<<endl;
        cout<<"The sum of factors = "<<sum<<endl;
	    if(sum==n){
            cout<<n<<" is a perfect number";
        }
        else{
            cout<<n<<" is not a perfect number";
        }
	return 0;
}
