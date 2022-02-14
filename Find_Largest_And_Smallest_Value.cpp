//Largest/smallest array value
#include<iostream>
using namespace std;
main()
{
    int i,max,min;
    int x[5];                  //Array decleration
    for(i=0;i<5;i++)          //Loop run to given five array value
    {
    	cout<<"Enter the array of value "<<i+1<<"=";
    	cin>>x[i];
	}
    max=x[0];                //Maximum assign zero
    for(i=0;i<5;i++)        //loop run five time
 	{
    	if(max<x[i])           //In this condition if maximum is less than given array
    	max=x[i];              //Maximum assign to the value of largest array
 	}
    min=x[0];             //Minimum assign to zero
    for(i=0;i<5;i++)     //Loop run five time
  	{
    	if(min>x[i])         //If condition check the minimum is greater than given array
    	min=x[i];           //Minimum assign the given array
  	}
    cout<<"Max="<<max;   //Print the maximum number
    cout<<"\nMin="<<min;  //print the minimum number
}
