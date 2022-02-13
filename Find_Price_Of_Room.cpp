#include<iostream>
using namespace std;
main()
{
	int number1,number2;
	cout<<"Enter for bed :";
	cin>>number1;
	cout<<"Enter the view :";
	cin>>number2;
	{
		if(number1<0&&number1>3)//AND operator
		cout<<"Price 0";
		if(number1==1)
		cout<<"Bed price=25000"<<endl;
		else if(number1==2)
		cout<<"Bed price=39000"<<endl;
		else if(number1==3)
		cout<<"Bed price=65000"<<endl;
	}
	
	{
		if(number2<0||number2>2)//OR operator
		cout<<"The price is for the room with lake view";
		else if(number2==1||number2==2&&number1<4)//AND operator and OR operator
		cout<<"view price=15000";
	}
}

