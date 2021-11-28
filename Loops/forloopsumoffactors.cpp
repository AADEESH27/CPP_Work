# include<iostream>
using namespace std;
int main()
{
int n,sum=1;
cout<<"Enter the number : ";
cin>>n;
for(int i=2;i<n;i++){
    if(n%i==0){
        sum+=i;
    }
}
	cout<<"The sum of the factors of "<<n<<" = "<<sum;
	return 0;
}
