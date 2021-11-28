# include<iostream>
using namespace std;
int main()
{
    int n,remainder,rev=0,sum=0;
    cout<<"Enter the number : ";
    cin>>n;
    
    while(n>0){
        remainder=n%10;
        n=n/10;
        rev=rev*10+remainder;
    }
    cout<<"The reverse of the given number is: "<< rev<<endl;

    return 0;
}

        // n            |remainder=n%10|     n=n/10   |rev=rev*10+remainder
        // 123          |3             |        12    |3
        // 12           |2             |        1     |32
        // 1            |1             |        0     |321 
    
