#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> v = {1,2,3,4,5};
    vector<int>::reverse_iterator rit = v.rbegin();

   for(rit=v.rbegin(); rit!=v.rend();rit++){
       cout<<(*rit)<<" ";
   }


    return 0;
}