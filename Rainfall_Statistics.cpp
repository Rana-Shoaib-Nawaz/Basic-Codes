//Task no.2
//Rainfall statistics
#include<iostream>
#include<string.h>
using namespace std;
main()
{
	int i,max,min,sum,average,a,helper,helper1;
	int x[12];                 // Array decleration
	a=0;
	sum=0;
	string name[12]={"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};  //Using string values

	for(i=0;i<12;i++)              //It loop run 12 times as given in array
	{
		cout << "Enter the rainfall "<<name[i]<<" :";   //It display the given rainfall that the user input
		cin>>x[i];        
		for(a=0;a<10;a++)      //In this loop if the user enter negative number than it again run
		{
			if(x[i]<0)            //If condition check the given number is not less than zero
			{
				cout<<"You enter wrong number try again\n";
				cin>>x[i];           //If the value enter wrong number it again given input
			}
		}
	}
	for(i=0;i<12;i++)    //loop run 12 times for find maximum number minimum number sum and average
	{
		sum=sum+x[i];        //Calculate sum
		average=sum/12;     //Calculate average
	}
	for(i=0;i<12;i++)  //Loop run 12 time 
	max=x[0];          //Maximum number assign to zero
	for(i=0;i<12;i++)  //In this loop it check the maximum number
	{
		if(max<x[i])       //If condition check the maximum number is less than it run
		max=x[i];         //Maximum assign the highest number
	}
	min=x[0];       //Minimum assign zero number
	for(i=0;i<12;i++)    //The loop run 12 times
	{
		if(min>x[i])        // The condition check the minimum number is less than than the given number
		min=x[i];           //Minimum number assign to the lowest number
	}
	for(i=0;i<12;i++)
	{
		if(max==x[i])      //If the maximum index is equal to the given array
		helper=i;          //The number assign to the helper
	}
	for(i=0;i<12;i++)
	{
		if(min==x[i])     //If the manimum index is equal to the given array
		helper1=i;       //The number assign to the helper1
	}
	cout<<name[helper]<<" Max="<<max<<endl;  //Display the maximum number
	cout<<name[helper1]<<" Min="<<min;       //Display the minimum number
	cout<<"\nSum="<<sum;                     //Display the sum
	cout<<"\nAverage="<<average;             //Display the average
}
