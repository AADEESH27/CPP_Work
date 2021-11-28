#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of rows: ";;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
           if((i+j)<=(n+1)) 
               cout<<"* ";
           
           else
               cout<<"";
           
        }
        cout<<endl;
    }
    return 0;
}
/*     j    1  2  3  4  5
       i 1  .  .  .  .  .
         2  .  .  .  .
         3  .  .  .
         4  .  .             
         5  .                 */