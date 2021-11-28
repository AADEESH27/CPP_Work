// #include<iostream>
// using namespace std;

// class Rational_Number 
// {
//    int num;
//    int deno;

//    public:

//    Rational_Number(int p=0,int q=0){
//     num=p;
//     deno=q;
//    }

// friend Rational_Number operator+ (Rational_Number R1,Rational_Number R2);

// friend ostream & operator<< (ostream &o,Rational_Number R);



// };

// Rational_Number operator+(Rational_Number R1,Rational_Number R2){
//     Rational_Number R3;
//     if(R1.deno==R2.deno){
//         R3.num=R1.num+R2.num;
//         R3.deno=R1.deno;
//     }
//     else if(R1.deno!=R2.deno){
//         R3.num=(R1.num*R2.deno)+(R2.num*R1.deno);
//         R3.deno=(R1.deno*R2.deno);
//     }
//     return R3;
// }

// ostream & operator<< (ostream &o,Rational_Number R){
//     cout<<R.num<<"/"<<R.deno<<endl;
//     return o;
// }

// int main(){

//     Rational_Number R1(3,4);
//     Rational_Number R2(2,5);
//     Rational_Number R3;

//     R3=R1+R2;
    
//     cout<<R3;

//     return 0;
// }

