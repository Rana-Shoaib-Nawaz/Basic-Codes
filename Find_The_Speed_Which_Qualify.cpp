#include <iostream>
using namespace std;
main()
{
	float speed1,speed2,speed3,speed4,speed5,speed6,average;
	cout<<"Enter the speed1 :";
	cin>>speed1;   //Taking speed
	cout<<"Enter the speed2 :";
	cin>>speed2;   //Taking speed
	cout<<"Enter the speed3 :";
	cin>>speed3;   //Taking speed
	cout<<"Enter the speed4 :";
	cin>>speed4;   //Taking speed
	cout<<"Enter the speed5 :";
	cin>>speed5;   //Taking speed
	average=(speed1+speed2+speed3+speed4+speed5)/5;
	cout<<"Enter the speed6 :";
	cin>>speed6;   //Taking speed
	if(average>speed6)
	cout<<"Speed qualifying="<<average;
	else
	cout<<"Speed qualifying="<<speed6;
	return 0;
}

