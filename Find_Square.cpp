#include<iostream>
using namespace std;
main()
{
 int Array[5];				//Declaring the array with the size of 5
 	for(int loop1=0;loop1<5;loop1++)	//for loop is used to iterate many times
	{
	cout<<"Enter The "<<loop1+1<<" Number :";	//Printing the statement and the value of loop
	cin>>Array[loop1];		//Getting the value from user and store it in array
	}	
	for(int loop2=0;loop2<5;loop2++)	//for loop is used to iterate many times
	{
		cout<<"Square :"<<Array[loop2]*Array[loop2]<<endl;	//Printing the statement and Multiplay the value which the user enter value
	}

}
