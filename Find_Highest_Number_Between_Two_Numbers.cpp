#include<iostream>
using namespace std;
main()
{
	int first_number,second_number;  		//Declaring the varaible
	cout<<"Enter the first number :";		//Printing the statement
	cin>>first_number;						//Getting the value from user
	cout<<"Enter the second number :";		//Printing the statement
	cin>>second_number;						//Getting the value from user
	if(first_number>second_number)			//If condition check that the first number is greater than second 
	{
		cout<<"The Highest Number is "<<first_number;	//Printing the statement and the value of first number
	}
	else									//else condition run when the if condition not run
		{
		cout<<"The Highest Number is "<<second_number;	//Printing the statement and the value of first number
		}
}
