// #include<iostream>
// #include<string>
// using namespace std;

// class Student 
// {
//     private:
//     int Roll_Number;
//     string Name;
//     float Maths_marks,Physics_marks,Chemistry_marks;

//     public:
//     //Mutator
//     void setStudent(int Roll_Number,string Name,float Maths_marks,float Physics_marks,float Chemistry_marks){
//         this->Roll_Number = Roll_Number;
//         this->Name = Name;
//         this->Maths_marks = Maths_marks;
//         this->Physics_marks = Physics_marks;
//         this->Chemistry_marks =Chemistry_marks;
//     }            
//     //Acessors
//     int getRoll_Number(){
//         return this->Roll_Number;
//     }
//     string getName(){
//         return this->Name;
//     }
//     int getMaths_marks(){
//         return this->Maths_marks;
//     }
//     int getPhysics_marks(){
//         return this->Physics_marks;
//     }
//     int getChemistry_marks(){
//         return this->Chemistry_marks;
//     }
//     //Parameterised Constructor
//     Student(int Roll_Number=0,string Name=0,float Maths_marks=0,float Physics_marks=0,float Chemistry_marks=0){
//         setStudent(Roll_Number,Name,Maths_marks,Physics_marks,Chemistry_marks);
//     }
//     //Total Marks
//     float Total_Marks(){
//         return Maths_marks+Physics_marks+Chemistry_marks;
//     }
//     //Final Grade
//     char Grade(){
//         float Percent=(Total_Marks()/300)*100;
//         if(Percent>85){
//             return 'A';
//         }
//         if(Percent>70&&Percent<85){
//             return 'B';
//         }
//         if(Percent<70){
//             return 'C';
//         }
//     }

// };

// int main(){

//     int Roll_Number;
//     string Name;
//     float Maths_marks,Physics_marks,Chemistry_marks;

//     cout<<"Enter your Full Name: ";
//     getline (cin,Name);
    
//     cout<<"Enter your Roll Number: ";
//     cin>>Roll_Number;
    
//     cout<<"Enter your Maths Marks: ";
//     cin>>Maths_marks;
    
//     cout<<"Enter your Physics Marks: ";
//     cin>>Physics_marks;
    
//     cout<<"Enter your Chemistry Marks: ";
//     cin>>Chemistry_marks;

//     Student S1(Roll_Number,Name,Maths_marks,Physics_marks,Chemistry_marks);

//     cout<<"Your Roll Number: "<<S1.getRoll_Number()<<endl;
//     cout<<"Your Name: "<<S1.getName()<<endl;
//     cout<<"Your Maths marks: "<<S1.getMaths_marks()<<endl;
//     cout<<"Your Physics marks: "<<S1.getPhysics_marks()<<endl;
//     cout<<"Your Chemistry marks: "<<S1.getChemistry_marks()<<endl;

//     cout<<"Your Total Marks are: "<<S1.Total_Marks()<<endl;
//     cout<<"Your Grade is: "<<S1.Grade()<<endl;

// return 0;
// }

#include<iostream>
#include<string>
using namespace std;

class Student
{
    private:
    string Roll_Number;
    string Name;
    string Class ;
    int Division;
    string date_of_birth;
    string blood_group;
    string contact_address;
    string mob_no;
    string license_no;

    public:

    //Mutator
    void setStudent(string Roll_Number , string Name , string Class , int Division , string date_of_birth , string blood_group , string contact_address , string mob_no , string license_no);

    //Accessors
    string get_Roll_Number();
    string get_Name();
    string get_Class() ;
    int get_Division();
    string get_date_of_birth();
    string get_blood_group();
    string get_contact_address();
    string get_mob_no();
    string get_license_no();

    //Default Constructor

    Student();

    //Parameterized Constructor

    Student(string Roll_Number , string Name , string Class , int Division , string date_of_birth , string blood_group , string contact_address , string mob_no , string license_no){
        setStudent(Roll_Number , Name , Class , Division , date_of_birth , blood_group , contact_address , mob_no , license_no);
    }

    //Copy Constructor

    Student(Student &S);

    friend ostream & operator << (ostream &out , Student &S);
    

};
    void Student::setStudent(string Roll_Number , string Name , string Class , int Division , string date_of_birth , string blood_group , string contact_address , string mob_no , string license_no){
    	this->Roll_Number = Roll_Number;
    	this->Name = Name;
    	this->Class = Class;
    	this->Division = Division;
    	this->date_of_birth = date_of_birth;
    	this->blood_group = blood_group;
    	this->contact_address = contact_address;
    	this->mob_no = mob_no;
    	this->license_no = license_no;
    }

    string Student::get_Roll_Number(){
    	return this->Roll_Number;
    }
    string Student::get_Name(){
    	return this->Name;
    }
    string Student::get_Class(){
    	return this->Class;
    }
    int Student::get_Division(){
    	return this->Division;
    }
    string Student::get_date_of_birth(){
    	return this->date_of_birth;
    }
    string Student::get_blood_group(){
    	return this->blood_group;
    }
    string Student::get_contact_address(){
    	return this->contact_address;
    }
    string Student::get_mob_no(){
    	return this->mob_no;
    }
    string Student::get_license_no(){
    	return this->license_no;
    }
    ostream & operator << (ostream &out,Student &S){
        cout<<"Name : "<<S.get_Name()<<endl;
        cout<<"Roll Number : "<<S.get_Roll_Number()<<endl;
        cout<<"Class : "<<S.get_Class()<<endl;
        cout<<"Division : "<<S.get_Division()<<endl;
        cout<<"Date Of Birth : "<<S.get_date_of_birth()<<endl;
        cout<<"Blood Group : "<<S.get_blood_group()<<endl;
        cout<<"Address : "<<S.get_contact_address()<<endl;
        cout<<"Contact Number : "<<S.get_mob_no()<<endl;
        cout<<"License Number : "<<S.get_license_no()<<endl;
        return out;
    }
    
  

int main(){	 
     
     string Name;
     cout<<"Enter your Name : ";
	 getline(cin, Name);
	
     string Roll_Number;
     cout<<"Enter your Roll Number : ";
	 cin>>Roll_Number;
	 
     string Class;
     cout<<"Enter your Class : ";
     cin>>Class;
	 
     int Division;
     cout<<"Enter your Division : ";
	 cin>>Division;
	 
	 string date_of_birth;
     cout<<"Enter your D.O.B : ";
	 cin>>date_of_birth;
	 
	 string blood_group;
     cout<<"Enter your Blood Group : ";
	 cin>>date_of_birth;
	 
	 string contact_address;
     cout<<"Enter your Address : ";
	 cin>>contact_address;
	 
	 string mob_no;
     cout<<"Enter your Mobile Number : ";
	 cin>>mob_no;
	 
	 string license_no;
     cout<<"Enter your License Number : ";
	 cin>>license_no;

	

   Student S1(Roll_Number , Name , Class , Division , date_of_birth , blood_group , contact_address , mob_no , license_no);
   
   cout<<endl;
   cout<<S1;

return 0;
}