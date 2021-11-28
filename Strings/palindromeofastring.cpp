#include<iostream>
#include<string>
using namespace std;

int main(){
    int t;
    while(t>0)
    cin>>n;
    string str;
    cout<<"Enter the string: ";
    getline(cin,str);
    int i;
 for ( i = 0; i < str.length(); i++) {
        if (str[i] >= 'a' && str[i] <= 'z')
            // Convert lowercase to uppercase
            str[i] = str[i] - 32;
        else if(str[i] >= 'A' && str[i] <= 'Z') 
            // Convert uppercase to lowercase
            str[i] = str[i] + 32;
    }

    cout<<str<<endl; 

    string rev="";
   
    int length=(int)str.length();
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 
    rev.resize(length);
   
    string::iterator it;
    string::reverse_iterator rit;
    
    //string iterator scans and saves the result at the same time for all the elements of the string.
    cout<<"Reverse of the string is: ";
    for(it=rev.begin(),rit=str.rbegin();it!=rev.end(),rit!=str.rend();it++,rit++){
       *it=*rit;
        cout<<*it;
    }
    cout<<endl;

    //in for loop the scanning of the elements and storing is done one element at a time   
    /*for(int i=0,j=length-1;i<length;i++,j--){
        rev[i]=str[j];
    }
  
    rev[length]='\0';
    cout<<"Reverse of the string: "<<rev<<endl;*/

    if(str.compare(rev)==0 && str[i] >= 'A' && str[i] <= 'Z' ){
        cout<<"Palindrome";
    }
    else{
        cout<<"Not Palindrome";
    }


    return 0;
}