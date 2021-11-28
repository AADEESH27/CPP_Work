#include <iostream>
using namespace std;

int main()
{
     int n, num, r, rev = 0;

     cout << "Enter a positive number: ";
     cin >> num;

     n = num;

     while (num > 0){
        r = num % 10;
        num = num / 10;
        rev = (rev * 10) + r;
        
     } 
     

     cout << "The reverse of the number is: " << rev << endl;

     if (n == rev)
         cout << "The number is a palindrome.";
     else
         cout << "The number is not a palindrome.";

    return 0;
}
