#include <iostream>
#include<cstdlib>
#include<cmath>
using namespace std;
void update(int *a,int *b) {
    int aa = *a;
    *a = *a+*b;
    *b = abs(aa-*b);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    cin>>a>>b;
    update(pa, pb);
    cout<<a<<" "<<b;

    return 0;
} 