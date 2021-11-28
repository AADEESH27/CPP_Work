#include<bits/stdc++.h>
using namespace std;
//printing vector 
void print_vec(vector<pair<int,int>> &/*good praactice*/v){
    int size=v.size(); // O(1)
    cout<<"size: "<<size<<endl;
    for(int i=0;i<size;i++){
        //same as array a[i]
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    cout<<endl;
}

int main(){

    vector<pair<int,int>> v;

    /* {{pair},{pair},{pair}}*/ 


    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int x,y;
        cin >> x >> y;
        v.push_back({x,y});
    }
    print_vec(v);
    return 0;
}