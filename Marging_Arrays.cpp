//Marging arrays
#include<iostream>
using namespace std;
main()
{
    int size1,size2,size3,j,temp,i;
    cout<<"Enter the size of N :";
    cin>>size1;
    cout<<"Enter the size of M :";
    cin>>size2;
    int arraya[size1];       //Decleration all the arrays
    int arrayb[size2];
    int arrayc[size3];
    size3=size1+size2;
    for( i=0;i<size1;i++)   //Loop run to number of size
 	{
    	cout<<"Enter the number of N :";
    	cin>>arraya[i];          //Enter the value of N in array
    	arrayc[i]=arraya[i];     //arrayc[i] assign the value of arraya[i]
 	}
    for( i=size1;i<size3;i++)    
  	{
    	cout<<"Enter the number of M :";
    	cin>>arrayb[i];          //Enter the value of arrayb[i]
    	arrayc[i]=arrayb[i];     //array[i] assign the value of arrayb[i]
  	}
    for(i=0;i<size3;i++)  //Loop work untill size3
	{
    	for(j=i+1;j<size3;j++)    
  		{
    		if(arrayc[i]>arrayc[j])   //If condition check if the arrayc[i] is greater than the arrayc[j]
			{
    			temp=arrayc[i];          //it swap the values
    			arrayc[i]=arrayc[j];
    			arrayc[j]=temp;
			}
  		}
  		cout<<arrayc[i]<<endl;
	}
}
