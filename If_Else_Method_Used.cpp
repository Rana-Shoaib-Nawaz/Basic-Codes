#include<iostream>
using namespace std;
main()
{
	int number,answer;
	cout<<"Enter the number :";
	cin>>number;
	answer=number%500;
	{
		if(number%500)
		cout<<"500:1\n";
		else
		cout<<"500:0\n";
	}
		{
		if(number%100)
		cout<<"100:0\n";
		else
		cout<<"100:1\n";
	}	{
		if(number%50)
		cout<<"50:1\n";
		else
		cout<<"50:0\n";
	}	{
		if(number%20)
		cout<<"20:1\n";
		else
		cout<<"20:0\n";
	}
		{
		if(number%10)
		cout<<"10:0\n";
		else
		cout<<"10:1\n";
	}
		{
		if(number%5)
		cout<<"5:0\n";
		else
		cout<<"5:1\n";
	}
		{
		if(number%1)
		cout<<"1:1";
		else
		cout<<"1:0";
	}
	return 0;
}
