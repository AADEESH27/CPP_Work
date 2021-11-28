#include<iostream>
#include<string>
using namespace std;

int main(){
    
    string str;
    cout<<"Enter the string: ";
    getline(cin,str);
    
    string::iterator it = str.begin();
    
    int vcount=0,wcount=1,ccount=0;
    
    for(it=str.begin();it!=str.end();it++){
        
    if(*it=='a'||*it=='e'||*it=='i'||*it=='o'||*it=='u'||*it=='A'||*it=='E'||*it=='I'||*it=='O'||*it=='U')
    {
        vcount++;
    }
    else if(*it==' ')
    {
        wcount++;
    }
    else
    {
        ccount++;
    }
    
    }
    
    cout<<"No.of vowels in the string are: "<<vcount<<endl;
    cout<<"No.of consonants in the string are: "<<ccount<<endl; 
    cout<<"No.of words in the string are: "<<wcount<<endl;  
    
    return 0;
}