#include<iostream>
using namespace std;
main()
{
	int day,month,year;     //Enter the value in integer
	cout<<"Enter the day :";
	cin>>day;
	cout<<"Enter the month :";
	cin>>month;
	cout<<"Enter the year :";
	cin>>year;
	day=day*month;          //Here day multiply with month
	if(day==year)           //It execute when day or year equal
	cout<<"Date is magic";
	else
	cout<<"Date is not magic";
	return 0;
}
