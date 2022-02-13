#include<iostream>
using namespace std;
main()
{
	int number1,number2,number3;
	cout<<"Enter the number1 :";
	cin>>number1;
	cout<<"Enter the number2 :";
	cin>>number2;
	cout<<"Enter the number3 :";
	cin>>number3;
	{
		if(number1>number2&&number1>number3&&number2>number3) //comparison
		{
		cout<<"Descending"<<endl<<number1<<endl<<number2<<endl<<number3<<endl;
		}
		else if(number1>number2&&number1>number3&&number3>number2) //comparison
		{
		cout<<"Descending"<<endl<<number1<<endl<<number3<<endl<<number2<<endl;
		}
		else if(number2>number1&&number2>number3&&number3>number1) //comparison
		{
		cout<<"Descending"<<endl<<number2<<endl<<number3<<endl<<number1<<endl;
		}
		else if(number2>number1&&number2>number3&&number1>number3) //comparison
		{
		cout<<"Descending"<<number2<<endl<<number1<<endl<<number3<<endl;
		}
		else if(number3>number1&&number3>number2&&number1>number2) //comparison
		{
		cout<<"Descending"<<endl<<number3<<endl<<number1<<endl<<number2<<endl;
		}
		else if(number3>number1&&number3>number2&&number2>number1) //comparison
		{
		cout<<"Descending"<<endl<<number3<<endl<<number2<<endl<<number1<<endl;
		}
	}
	
	{
		if(number1<number2&&number1<number3&&number2<number3) //comparison
		{
		cout<<"Ascending"<<endl<<number3<<endl<<number2<<endl<<number1;
		}
		else if(number1<number2&&number1<number3&&number3<number2) //comparison
		{
		cout<<"Ascending"<<endl<<number1<<endl<<number3<<endl<<number2;
		}
		else if(number2<number1&&number2<number3&&number3<number1) //comparison
		{
		cout<<"Ascending"<<endl<<number2<<endl<<number3<<endl<<number1;
		}
		else if(number2<number1&&number2<number3&&number1<number3) //comparison
		{
		cout<<"Ascending"<<number2<<endl<<number1<<endl<<number3;
		}
		else if(number3<number1&&number3<number2&&number1<number2) //comparison
		{
		cout<<"Ascending"<<endl<<number3<<endl<<number1<<endl<<number2;
		}
		else if(number3<number1&&number3<number2&&number2<number1) //comparison
		{
		cout<<"Ascending"<<endl<<number3<<endl<<number2<<endl<<number1;
		}
	}
	return 0;
}
