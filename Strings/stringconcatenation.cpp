#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main(){
 
    /*string time="11:00";
    string date=" 18 April,2021";
    //string today=time+" "+date;
    string today=time.append(date);

    cout<<today<<endl;*/

    char str1[]="Good";
    char str2[]=" Morning";
    strcat(str1,str2);

    cout<<str1;

    return 0;
}