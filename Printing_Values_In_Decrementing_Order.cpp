#include<iostream>
using namespace std;
main()
{
	int number,number1;				//Declaring the varaible
	cout<<"Enter the number :";		//Printing the statement
	cin>>number;					//Getting the value from user
	number1=number;					//Assign the value of number to number1
	for(int loop=0;loop<=number1;loop++)	//for loop is used to iterate many times
	{
		cout<<number<<endl;			//Printing the statement and end the line
		number--;					//uesd the decrement operator
	}
}
