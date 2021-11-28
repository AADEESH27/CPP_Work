#include<iostream>
#include<string>
using namespace std;

int main(){

    string str;
    cout<<"Enter the string: ";
    getline(cin,str); 
    int length=str.length();
    
    string rev="";
    rev.resize(length);
   
    string::reverse_iterator rit;
    for(rit=str.rbegin();rit!=str.rend();rit++){
        cout<<*rit;
    }
    
    //using for loop only

    /*for(int i=0,j=length-1;i<=length,j>=0;i++,j--){
        rev[i]=str[j];
    }*/
    rev[length]='\0';
    cout<<rev<<endl;
    if(str.compare(rev)==0){
        cout<<"palindrome";
    }
    else{
        cout<<"not palindrome";
    }

    return 0;
}
  