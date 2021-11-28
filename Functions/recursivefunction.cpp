#include<iostream>
using namespace std;

int recursive(int n){
    if(n>=0){
        recursive(n-1);
        cout<<n<<endl;
    }
}
/*int recursive(int n){
    if(n>=0){
        cout<<n<<endl;
        recursive(n-1);
    }
}*/

int main(){

    recursive(5);

    return 0;
}