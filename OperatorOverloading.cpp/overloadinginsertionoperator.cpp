#include<bits/stdc++.h>
using namespace std;

class Complex
{
   private:
   int real;
   int img;

   public:

   Complex (int real=0,int img=0)
    {
        this->real =real;
        this->img =real;
    }


    void display(){
    cout<<real<<" + "<<img<<" i"<<endl;
    }

    friend Complex operator + ( Complex C1 , Complex C2);

    friend Complex operator - ( Complex C1 , Complex C2);

    friend Complex operator * ( Complex C1 , Complex C2);

    friend Complex operator / ( Complex C1 , Complex C2);

    friend ostream & operator << (ostream &out,Complex &C);

    friend istream & operator >> (istream &in,Complex &C);

};
Complex operator + ( Complex C1 , Complex C2){
	 Complex temp;
	 temp.real = C1.real + C2.real;
	 temp.img = C1.img + C2.img;
     cout<<"The sum is = ";
	 return temp;
}

Complex operator - ( Complex C1 , Complex C2){
	 Complex temp;
	 temp.real = C1.real - C2.real;
	 temp.img = C1.img - C2.img;
     cout<<"The differece is = ";
	 return temp;
}

Complex operator * ( Complex C1 , Complex C2){
	 Complex temp;
	 temp.real = C1.real * C2.real;
	 temp.img = C1.img * C2.img;
     cout<<"The product is = ";
	 return temp;
}

Complex operator / ( Complex C1 , Complex C2){
	 Complex temp;
	 temp.real = C1.real / C2.real;
	 temp.img = C1.img / C2.img;
     cout<<"The division is = ";
	 return temp;
}

ostream & operator << (ostream &out,Complex &C){
    cout<<C.real<<" + "<<C.img<<"i"<<endl;
    return out;
}

istream & operator >> (istream &in , Complex  &C){
	cout<<"Enter the real part: ";
    cin>>C.real;
    cout<<"Enter the imaginary part: ";
    cin>>C.img;
    cout<<endl;
    return in;
}

int main(){

    Complex C1;
    Complex C2;
    cout<<"Enter the Complex1:"<<endl;
    cin>>C1;
    cout<<"Enter the Complex2:"<<endl;
    cin>>C2;

    string response;

    int choice
    ;
    cout<<"*********************MENU*********************"<<endl;
    cout<<"For addition choose 1"<<endl;
    cout<<"For subtraction choose 2"<<endl;
    cout<<"For multiplication choose 3"<<endl;
    cout<<"For division choose 4"<<endl;
    cout<<"*********************MENU*********************"<<endl;

    cout<<"Please choose one of the options = ";
    cin>>choice;
    cout<<endl;

    Complex C3;
    
    do{
        cout<<"Please choose one of the options = ";
        cin>>choice;
        cout<<endl;
        switch(choice){

                case 1:
                C3=C1+C2;
                cout<<C3<<endl;
                break;
                case 2:
                C3=C1-C2;
                cout<<C3<<endl;
                break;
                case 3:
                C3=C1*C2;
                cout<<C3<<endl;
                break;
                case 4:
                C3=C1/C2;
                cout<<C3<<endl;
                break;
                default:
                cout<<"Wrong Choice";
    }
        cout<<"To continue enter Yes else enter No"<<endl;
        getline(cin,response);
  }

    while(response=="Yes"||response=="yes");
    
    return 0;
}
// #include<bits/stdc++.h>
// using namespace std;

// class Operations
// {
//    public:

// 	void  add (int a,int b);
// 	void  subtract (int a,int b);
// 	void  multiply (int a,int b);
// 	void  divide (int a,int b);


// };

// void Operations::add (int a,int b){
// 	int c = a + b ;
// 	cout<<"The sum = "<<c;
// }
// void  Operations::subtract (int a,int b){
// 	int c = a - b ;
// 		cout<<"The difference = "<<c;
// }
// void  Operations::multiply (int a,int b){
// 	int c = a * b ;
// 		cout<<"The product = "<<c;
// }
// void  Operations::divide (int a,int b){
// 	int c = a / b ;
// 		cout<<"The division = "<<c;
// }

// int main(){

//    int x,y;
//    cout<<"Enter the two numbers: ";
//    cin>>x>>y;


//     string response;

//     int choice;

//     cout<<"*********************MENU*********************"<<endl;
//     cout<<"For addition choose 1"<<endl;
//     cout<<"For subtraction choose 2"<<endl;
//     cout<<"For multiplication choose 3"<<endl;
//     cout<<"For division choose 4"<<endl;
//     cout<<"*********************MENU*********************"<<endl;

//     cout<<"Please choose one of the options = ";
//     cin>>choice;
//     // cout<<endl;

//     Operations O;

//     do{

//         switch(choice){

//                 case 1:
//                   O.add(x,y);
//                 break;
//                 case 2:
//                   O.subtract(x,y);
//                 break;
//                 case 3:
//                   O.multiply(x,y);
//                 break;
//                 case 4:
//                   O.divide(x,y);
//                 break;
//                 default:
//                 cout<<"Wrong Choice";
//     } 
//         cout<<endl;
//         cout<<"To continue enter Yes else enter No"<<endl;
//         getline(cin,response);
//     }

//     while(response=="Yes"||response=="yes");

//     return 0;
// }

/*
#include<iostream>
using namespace std;

class Complex
{
    private:
	int real;
	int img;
	        
	public:
	Complex(int r=0,int i=0)
	{
	    real=r;
	    img=i;
	}
	void display()
	{
	    cout<<real<<"+i"<<img<<endl;
	}
	
	friend ostream & operator<<(ostream &out,Complex &c);
	
};
    
    ostream & operator<<(ostream &out,Complex &c)
    {
	    out<<c.real<<"+i"<<c.img<<endl;
	    return out;
    }
                
int main()
{
	Complex c(10,5);
	    
	cout<<c<<endl;

    return 0;
	    
}
*/
