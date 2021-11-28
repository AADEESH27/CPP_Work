#include<iostream>
#include<cstring>
using namespace std;

int main(){

char main[]="Programming"; 
char sub[]="Pro";

  if(strstr(main,sub)!=NULL){
  cout<<strstr(main,sub)<<endl;
  }
  else{
  cout<<"No substring is found."<<endl;
  }
        
  //used only when a single character is to be searched
  //  cout<<strrchr(main,'r')<<endl;    

return 0;

}