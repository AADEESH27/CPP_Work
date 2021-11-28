#include <iostream>
using namespace std;

int main()
{
    int a[4][3]={1,2,3,4,5,6,7,8,9,10,11,12}; 
    int b[3][3]={1,2,3,4,5,6,7,8,9}; 
    int mult[4][3];
    
    //Initialising the elements of the mult to 0
    for(int i = 0; i < 4; ++i)
        for(int j = 0; j < 3; ++j)
        {
            mult[i][j]=0;
        }

    // Multiplying matrix a and b and storing in array mult.
    for(int i = 0; i < 4; ++i)
        for(int j = 0; j < 3; ++j)
            for(int k = 0; k < 3; ++k)
            {
                mult[i][j] += a[i][k] * b[k][j];
            }

    // Displaying the multiplication of two matrix.
    cout << endl << "Output Matrix: " << endl;
    for(int i = 0; i < 4; ++i){
       for(int j = 0; j < 3; ++j)
    {
        cout << " " << mult[i][j];
        
        }
    cout<<endl;   
    }

    return 0;
}