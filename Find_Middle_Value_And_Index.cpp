#include<iostream>
using namespace std;
main()
{
	int length,middle_number,index_number;	//Declaring the varaible
	cout<<"Enter The Length Of Array :";	//Printing the statement
	cin>>length;							//Getting the value from user
	int Array[length];						//Declaring the array with the length which give the user
	for(int loop=0;loop<length;loop++)		//for loop is used to iterate many times
	{
		cout<<"Enter The "<<loop+1<<" Number :";	//Printing the statement and the value of loop
		cin>>Array[loop];					//Getting the value from user and store it in array
	}
	if(length%2==0)							//If condition check that the value modulus is zero
	{
		middle_number=length/2;				//Length Dividing by 2 and assign the value to miidle_number 
	}
	if(length%2!=0)							//If condition check that the value modulus is not zero
	{	
		middle_number=length/2+1;			//Length Dividing by 2 and add 1 and assign the value to miidle_number
	}
	cout<<"Middle value is:"<<Array[middle_number-1]<<" with index "<<middle_number-1;	//Printing the statement and the value and the index of array
}
