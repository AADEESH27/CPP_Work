#include<iostream>
#include<string>
using namespace std;

int main(){

    string greeting;
    cout<<"Enter the string: ";
    getline (cin, greeting);
    cout<<greeting<<endl;
    cout<<greeting.append(" World how are you ?")<<endl;
    cout<<greeting.insert(0,"Yo ")<<endl;
    cout<<greeting.replace(0,greeting.length(),"Hi")<<endl;
    greeting.push_back('i');
    cout<<greeting<<endl;
    greeting.pop_back();
    cout<<greeting<<endl;
    return 0;
}