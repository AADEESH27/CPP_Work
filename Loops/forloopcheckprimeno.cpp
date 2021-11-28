# include<iostream>
using namespace std;
int main()
{
	int i=2,n, factor_count=0;
	cout<<"Enter the number :";
    cin>>n;
	while(i*i<=n)
	{
	    if(n%i==0)
	    {
		factor_count++;
	    }
		i+=1;
		 
	}  
	if(factor_count==0)
	cout<<n<<" is prime number"<<endl;
	else
	cout<<n<<" is not a prime number"<<endl; 
   
	return 0;
}

