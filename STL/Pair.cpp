#include<bits/stdc++.h>
using namespace std;

int main(){

pair <int,string> p ;

//p=make_pair(2,"hello");
p={4,"hello"};
pair<int ,string> &p1=p;
p1.first=43;
cout<<p1.first<<" "<<p1.second<<endl;
cout<<p.first<<" "<<p.second<<endl;

int A[3]={1,2,3};
int B[3]={3,4,5};
//for storing values at same index we use pair
pair<int ,int> p_array[3];
p_array[0]={1,3};
p_array[1]={2,4};
p_array[2]={3,5};
//on swapping the whole set is swaped 
swap (p_array[0],p_array[1]);
for(int i=0;i<3;++i){
    cout<<p_array[i].first<<" "<<p_array[i].second;
    cout<<endl;
}

return 0;
}