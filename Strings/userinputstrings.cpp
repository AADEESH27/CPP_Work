// #include<iostream>
// #include<string>
// using namespace std;

// int main(){
//     string fullname;
//     do{
//     cout<<"Enter your fullname: ";
//     getline (cin,fullname);
//     cout<<"Your name is: "<<fullname<<endl;
//     }
//     while(fullname=="aadeesh");
//     /*char fullname[50];
//     cout<<"Enter your fullname: ";
//     cin.getline(fullname,50);
//     cout<<"Your name is: "<<fullname<<endl;*/

//     return 0;
// }

#include<iostream>
#include<string>
#include<cstring>
using namespace std;

class MyException: exception
{
        
};

class Student{
	char* name;
    char* Roll_no;
    char* cls;
    char* div;
    char* DOB;
    char* blood_grp;
    char* address;
    char* telephone;
    char* license;

    public:

    //Default Constructor
    Student();

    //Parameterized Constructor
    Student(char* name , char* Roll_no , char* cls , char* div , char* DOB , char* blood_grp , char* address , char* license , char* telephone);

    //Copy Constructor
    Student(Student &);

    //Destructor
    ~Student();

    void setdata();
    void displaydata();

    friend class Result;

};

Student::Student(){
	name = new char;
    Roll_no = new char;
    cls = new char;
    div = new char;
    DOB = new char;
    blood_grp = new char;
    address = new char;
    telephone = new char;
    license = new char;
}

Student::Student(char* name , char* Roll_no , char* cls , char* div , char* DOB , char* blood_grp , char* address , char* license , char* telephone){

	int length;

    length = strlen(name);
	//this->name = new char[length];
	this->name = name;

	length = strlen(Roll_no);
	//this->Roll_no = new char[length];
	this->Roll_no =Roll_no;

	length = strlen(cls);
	//this->cls = new char[length];
	this->cls = cls;

	length = strlen(div);
	//this->div = new char[length];
	this->div =div;

	length = strlen(DOB);
	//this->DOB = new char[length];
	this->DOB =DOB;

	length = strlen(blood_grp);
	//this->blood_grp = new char[length];
	this->blood_grp =blood_grp;

    length =strlen(address);
    //this->address=new char[length];
    this->address=address;

    length=strlen(license);
    // this->license=new char[length];
    this->license=license;

    length=strlen(telephone);
    // this->telephone=new char[length];
    this->telephone=telephone;

}

Student::~Student(){
	delete name;
	delete Roll_no;
	delete cls;
	delete blood_grp;
	delete address;
	delete DOB;
	delete div;
    delete license;
    delete telephone;
}

Student::Student(Student &S){
	name = S.name;
	Roll_no = S.Roll_no;
	cls = S.cls;
	div = S.div;
	DOB = S.DOB;
	blood_grp = S.blood_grp;
	address = S.address;
	telephone = S.telephone;
	license = S.license;
}


void Student::setdata(){
        cout<<"Enter the Name of the student :";
		cin>>name;
        cout<<"Enter the Roll_no of the student : ";
		cin>>Roll_no;
        cout<<"Enter the class of the student :";
        cin>>cls;
        cout<<"Enter the Division of the student : ";
		cin>>div;
        cout<<"Enter the Date of Birth of the student :";
		cin>>DOB;
        cout<< "Enter the blood group of the student :";
		cin>>blood_grp;
		cout<<"Enter the address of the student : ";
		cin>>address;
		cout<<"Enter the telephone number of the student :";
		cin>>telephone;
		cout<<"Enter the DL number of the student :";
		cin>>license;
}

void Student::displaydata(){
	cout<<"Name of Student is ="<<this->name<<endl;
    cout<<"Roll Number of Student is = "<<this->Roll_no<<endl;
    cout<<"Class of Student is = "<<this->cls<<endl;
    cout<<"Division of Student is = "<<this->div<<endl;
    cout<<"Date of Birth of Student is = "<<this->DOB<<endl;
    cout<<"Blood group of Student is = "<<this->blood_grp<<endl;
    cout<<"Address of Student is = "<<this->address<<endl;
    cout<<"Telephone Number of Student is = "<<this->telephone<<endl;
    cout<<"License Number of Student is = "<<this->license<<endl;
}

class Result{

	double marks;

public:

	double percentage(double marks , Student S){
		this-> marks = marks;
		double per = (marks/200)*100;
		cout<<S.Roll_no<<endl;
        return per;
	}
};


int main(){

	char* name=new char;
    char* Roll_no=new char;     //let for s1 para
    char* cls=new char;
    char* div=new char;
    char* DOB=new char;
    char* blood_grp=new char;
    char* address=new char;
    char* telephone=new char;
    char* license=new char;
    cout<<"Enter the details of Student1 : "<<endl;
        cout<<"Enter the Name of the student :";
		cin>>name;
        cout<<"Enter the Roll_no of the student : ";
		cin>>Roll_no;
        cout<<"Enter the class of the student :";
        cin>>cls;
        cout<<"Enter the Division of the student : ";
		cin>>div;
        cout<<"Enter the Date of Birth of the student :";
		cin>>DOB;
        cout<< "Enter the blood group of the student :";
		cin>>blood_grp;
		cout<<"Enter the address of the student : ";
		cin>>address;
		cout<<"Enter the telephone number of the student :";
		cin>>telephone;
      
        try{
    	    if(sizeof(telephone) != 10){
    	    throw MyException();	
    	    }
        }
        catch (MyException &e) {
            cout<<"Error !"<<endl;
    		cout<<"Enter the telephone number of the student : ";
    		cin>>telephone;
        }

		cout<<"Enter the DL number of the student :";
		cin>>license;
        Student S1(name,Roll_no,div,cls,address,blood_grp,telephone,license,DOB);

        cout<<endl;
        Student S2;
        cout<<"Enter the details of Student2 : " <<endl;
        S2.setdata();

        Student S3(S2); //s3=s2
        cout<<"\n************\n";
		cout<<"***this is Student 1:**"<<endl;
		S1.displaydata();
        cout<<"\n************\n";

		cout<<"***this is Student 2:***"<<endl;
        S2.displaydata();
        cout<<"\n************\n";

		cout<<"***this is Student 3:***"<<endl;
        S3.displaydata();
        cout<<"\n************\n";

        string response = "Yes";
        while(response=="Yes"){
        Result R;
        double marks;
        cout<<"Enter the marks of Student : ";
        cin>>marks;
        double result = R.percentage(marks , S1);
        cout<<"Result of Student = "<<result<<"%"<<endl;
        cout<<"Do you want to continue ";
        cin>>response;
        }

    return 0;
}