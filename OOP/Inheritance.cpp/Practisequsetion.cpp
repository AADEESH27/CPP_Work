#include<iostream>
#include<string>
using namespace std;

class Employee 
{
    string Name;
    int EID;

    public:
    Employee(string Name,int EID){
        set_Name(Name);
        set_EID(EID);
    }
    void set_Name(string Name);
    void set_EID(int EID);
    string get_Name();
    int  get_EID();
};
    void Employee::set_Name(string Name){
        this->Name=Name;
    }
    void Employee::set_EID(int EID){
        this->EID=EID;  
    }
    string Employee::get_Name(){
        return this->Name;
    }
    int Employee::get_EID(){
        return EID;
    }

class Full_time_Employee: public Employee
{
    int Salary;

    public:
    Full_time_Employee(string Name,int EID,int Salary):Employee(Name,EID){
        set_Salary(Salary);
    }
    void set_Salary(int Salary);
    int  get_Salary();
};
    void Full_time_Employee::set_Salary(int Salary){
        this->Salary=Salary;
    }
    int Full_time_Employee::get_Salary(){
        return this->Salary;
    }

class Part_time_Employee: public Employee
{
    int DailyWage;

    public:
    Part_time_Employee(string Name,int EID,int DailyWage): Employee(Name,EID){
        set_DailyWage(DailyWage);
    }
    void set_DailyWage(int DailyWage);
    int get_DailyWage();
};
    void Part_time_Employee::set_DailyWage(int DailyWage){
        this->DailyWage=DailyWage;
    }
    int Part_time_Employee::get_DailyWage(){
        return this->DailyWage;
    }

int main(){
    Full_time_Employee F1("John",121,500000);
    Part_time_Employee P1("Jack",112,100000);

    cout<<"Salary of "<<F1.get_Name()<<" is "<<F1.get_Salary()<<endl;
    cout<<"Salary of "<<P1.get_Name()<<" is "<<P1.get_DailyWage()<<endl;
    return 0;
}    