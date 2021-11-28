#include<iostream>
#include<string>
using namespace std;

int main(){

    string greeting="Hello";
    string str1="Language";
    char str2[100];

    // /*FINDING ANY OCCURENCE FROM LEFT*/cout<<greeting.find("ello")<<endl;
    // /*FINDING ANY OCCURENCE FROM RIGHT*/cout<<str1.rfind("age")<<endl;
    // /*ERAZING ANY DATA STORED IN THE OBJECT*/greeting.erase();
    cout<<greeting<<endl;
    // /*CALCULATING THE CAPACITY OF THE OBJECT */cout<<greeting.capacity()<<endl;
    // /*CALCULATING THE MAXIMUM SIZE OF THE OBJECT*/cout<<greeting.max_size()<<endl;
    // /*TO ADD ANY THING/ANOTHER STRING IN THE OBJECT BUT AT THE END OF THE STRING ONLY*/cout<<greeting.append(" World.How are you?")<<endl;
    // cout<<greeting.capacity()<<endl;
    // /*CALCULATING THE LENGTH OF THE OBJECT*/cout<<greeting.length()<<endl;
    // /*TO ADD ANY THING IN THE OBJECT CAN ALSO REFER THE STARTING INDEX ANYWHERE IN THE STRING */cout<<greeting.insert(0,"World.How are you? ")<<endl;
    // cout<<greeting.length()<<endl;
    /*TO REPLACE ANY THING IN THE OBJECT WITH STARTING POSITION AND LENGTH TO BE REPLACED*/cout<<greeting.replace(0,5,"Hi!")<<endl;
    // /*TO ADD ANY THING IN THE OBJECT FROM ENDING*/greeting.push_back('i'); 
    // cout<<greeting<<endl;
    // /*TO REMOVE LAST ELEMENT FROM THE STRING (WORKS AS A BACKSPACE)*/greeting.pop_back();
    // cout<<greeting<<endl;
    // /*TO INTERCHANGE TWO STRINGS*/greeting.swap(str1);
    // cout<<greeting<<endl;
    // cout<<str1<<endl;
    // /*TO COPY MATERIAL FROM ONE OBJECT TO THE OTHER OBJECT CAN ONLY BE USED WITH ARRAY TYPE STRING CAN ALSO SPECIFY HOW MUCH TO COPY*/str1.copy(str2,str1.length());
    // cout<<str2<<endl;
    // /*TO FIND FIRST OCCURENCE OF THE GIVEN DATA IN THE OBJECT FROM LEFT(CAN ALSO MENTION THE SEARCHING INDEX*/cout<<greeting.find_first_of('a',1)<<endl;
    // /*TO FIND FIRST OCCURENCE OF THE GIVEN DATA IN THE OBJECT FROM RIGHT(CAN ALSO MENTION THE SEARCHING INDEX*/cout<<greeting.find_last_of('a',6)<<endl;
     /*TO FIND SUBSTRING IN THE OBJECT(CAN ALSO MENTION THE STARTING SEARCHING INDEX)*/cout<<greeting.substr(4)<<endl;

    cout<<greeting<<endl;

    return 0;
}