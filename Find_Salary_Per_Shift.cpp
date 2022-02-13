#include<iostream>
using namespace std;
main()
{
	int number1,shift;
	double hour,shift1,shift2,shift3,shift4,retirement1,retirement2;
	cout<<"Enter the hours worked  :";
	cin>>number1;
	cout<<"Enter the shift :";
	cin>>shift;
	cout<<"The hours worked="<<number1<<endl;

	shift1=51;
	shift2=111;
	shift3=198;
	shift4=(number1-9)*33;
	retirement1=shift2*3/100;
	retirement2=shift3*3/100;
	{
		if(shift==1) //comparison
		cout<<"17 per hour="<<shift1<<endl<<"Regular pay=51"<<endl;
		else if(shift==2) //comparison
		cout<<"18.50 per hour="<<shift2<<endl<<"Regular pay=111"<<endl;
		else if(shift==3) //comparison
		cout<<"22 per hour regular time "<<shift3<<endl<<"Regular pay=198"<<endl;
	}
	
	{
		if(number1>9)
		cout<<"33 per hour overtime"<<shift4<<endl<<"Overtime pay="<<shift4<<endl<<"The total of regular and overtime pay="<<shift3+shift4<<endl;
	}
	
	{
		if(shift==2) //comparison
		cout<<"Retirement deduction="<<retirement1<<endl;
		else if(shift==3) //comparison
		cout<<"Retirement deduction="<<retirement2<<endl;
	}
	
	{
		if(shift==2) //comparison
		cout<<"The net pay="<<shift2-retirement1;
		else if(shift==3&&number1<9) //AND operator
		cout<<"The net pay="<<shift3-retirement2;
		else if(shift==3&&number1>9) //AND operator
		cout<<"The net pay="<<shift3+shift4-retirement1;
	}
}

