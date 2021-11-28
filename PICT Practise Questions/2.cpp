# include<iostream>
using namespace std;
int main()
{
    int n,runs=0,target;
    cin>>n;
    cin>>target;
    
    for(int i=(20-n);i>=1;i--){
        if(i%2==0){
            runs=runs+15;
        }
        else if(i%2!=0){
            runs=runs+10;
        }
        else if(i%2==0){
            runs=runs+15;
        }
        else if(i%5==0){
            runs=runs+20;
        }
        else if(i%5==0 && i%2==0){
            runs=runs+20;
        }
    }
    if(runs>=target)
     cout<<"WIN";
    else
    cout<<"LOST";

    return 0;
}