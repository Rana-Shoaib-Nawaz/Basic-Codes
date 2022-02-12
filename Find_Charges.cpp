#include<iostream>
#include<cmath>
using namespace std;
main()
{
	int check,charge,charge1,charge2,charge3,charge4,charge5;
	cout<<"Enter the check :";
	cin>>check;
	charge1=(10*check)+50;
	charge2=(8*check)+50;
	charge3=(6*check)+50;
	charge4=(4*check)+150;
	charge5=(4*check)+50;
	if(check<0)
	cout<<"Amount is overdrawn";
	else if(check<=20)     //It execte when the check is small than or equal to 20
	cout<<"charges="<<charge1;
	else if(check>=20&&check<=39)  //It execute when the check is more than 20 or less than 39
	cout<<"charges="<<charge2;
	else if(check>=40&&check<=59)  //It execute when the check is more than 40 or less than 59
	cout<<"charges="<<charge3;
	else if(check>=60)       //It execute when the check is more than 60
	cout<<"charges="<<charge5;
	else if(check>=375)      //It execute when the check is more than 375
	cout<<"charges="<<charge4;	
}
