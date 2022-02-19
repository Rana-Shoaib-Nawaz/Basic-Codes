#include<iostream>
using namespace std;
main()
{
	int Array[5];			//Declaring the array with the size of 5
	int temporary;			//Declaring the varaible
	for(int loop=0;loop<5;loop++)	//for loop is used to iterate many times
	{
	cout<<"Enter The "<<loop+1<<" Number :";	//Printing the statement and the value of loop
	cin>>Array[loop];		//Getting the value from user and store it in array
	}
	
	temporary=Array[0];
	for(int loop1=0;loop1<5;loop1++)
	{
		for(int loop2=0;loop2<loop1;loop2++)
		{
			if(Array[loop1]>temporary)
			temporary=Array[loop1];
		}
	}
	cout<<"The Highest Number is "<<temporary;
}
