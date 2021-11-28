# include<iostream>
using namespace std;
int main(){
    
    long long int i,n,factorial=1;
    cout<<"Enter the no. : ";
    cin>>n;
    for(i=1;i<=n;i++){
        factorial=factorial*i;
    }
   
    cout<<n<<"! = "<<factorial<<endl;
	
	return 0;
}
