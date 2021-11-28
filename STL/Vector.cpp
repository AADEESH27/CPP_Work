#include<bits/stdc++.h>
using namespace std;
//printing vector 
void print_vec(vector<int> &/*good praactice*/v){
    // int size=v.size(); // O(1)
    cout<<"size: "<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        //same as array a[i]
        cout<<v[i]<<" ";
    }
    cout<<endl;
    v.push_back(3);
}
int main(){
//int a[10];
//size of vector is dynamic unlike array
//vector<int> v;//initial size 0
    
//input vector
/*int n;
cin>>n;
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    v.push_back(x);  // O(1)
    print_vec(v);

}*/
vector<int> t;
vector<int> &r=t; //
t.push_back(8);  //O(1)
r.push_back(5);
//t.pop_back(); // O(1)
print_vec(t);
print_vec(t); 
print_vec(r);
return 0;
}