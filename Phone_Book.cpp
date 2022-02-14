//Phone book
#include<iostream>
#include<string.h>
using namespace std;
main()
{
	string target;
	cout<<"Enter the number : ";
	cin>>target;
	string names[]={"Husnain","Ali Shan","Mehdi"};     //String use to store names
	string numbers[]={"03056649417","03076551205","03176202271"};      //String use to store numbers
	for(int i=0;i<2;i++)
	{
		if(names[i]==target)     //If condition check that the names and the target index same or not
		{
			cout<<numbers[i];    //Print numbers
		}
	}
	for(int i=0;i<2;i++)
	{
		if(numbers[i]==target)     // //If condition check that the names and the target index same or not
		{
			cout<<names[i];         //Print names
		}
	}
}
	
