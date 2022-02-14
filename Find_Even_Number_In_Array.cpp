//Even number of array
#include<iostream>
using namespace std;
main()
{
    int size;
    cout<<"Enter the number :";
    cin>>size;
    int array[size];       //Decleration the array and the size of array
    cout<<"Even numbers\n";
    for(int i=1;i<=size;i++)  
 	{
 	   if(i%2==0)       //If condition check if the modulus is zero than print
  		{
    		cout<<i;
  		}
 	}
}
