/*Amstrong Number*/
# include<iostream>
# include<cmath>
using namespace std;
int main()
{
	int n,r,sum=0,m;
	cout<<"Enter the number: ";
	cin>>n;
	m=n;
	while(n>0)
	{
		r=n%10;
        n=n/10;
		sum=sum+r*r*r;
		
	}
        cout<<sum<<endl;
	if(sum==m)
		cout<<"Armstrong number";
    
	else
		cout<<"Not a Armstrong number";
    
	return 0;
}

