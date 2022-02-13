#include<iostream>
using namespace std;
main()
{
	float hours1,hours2,hours3;
	cout<<"Enter the hours1 :";
	cin>>hours1;
	cout<<"Enter the hours2 :";
	cin>>hours2;
	cout<<"Enter the hours3 :";
	cin>>hours3;
	hours1=hours1*0.2142;//per hour multiply
	hours2=hours2*0.1744;//per hour multiply
	hours3=hours3*0.1369;
	cout<<"Employee1="<<hours1<<endl<<"Employee2="<<hours2<<endl<<"Employee3="<<hours3;
	return 0;
}

