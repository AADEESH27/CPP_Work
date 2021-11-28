#include<iostream>
using namespace std;
int main()
{
	for(int i=1;i<=4;i++)
	{
	    for(int j=1;j<=4;j++)
	    {
			if(i>j){
		    cout<<"  ";
			}
	    
            else if(i<=j){
                cout<<"* ";
            }
        }
	        
	    cout<<endl;
	}
    
	
	
	
	
	
	
	
	
	/* int n;
	 cin >> n;
	 for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i<=j)
                cout<<"* ";
            else
                cout<<"  ";
        }
        cout<<endl;
    }*/


	return 0;
	
}  /*  
       * * * * *
	     * * * *
		   * * *
		     * *
			   * 
			   */


   /* i=1;i<n;i++
      j=1;j<=n;j++
	  if(i>j)
	  cout<<" ";
	  else if(i<=j)
	  cout<<"*"
	*/