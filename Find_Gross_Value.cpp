#include<iostream>
using namespace std;
main()
{
	int gross1,gross2,gross3,average;
	cout<<"Enter the gross1 :";
	cin>>gross1;
	cout<<"Enter the gross2 :";
	cin>>gross2;
	cout<<"Enter the gross3 :";
	cin>>gross3;
	gross1=((gross1*9)/100)+200;  //It give the value of gross1
	gross2=((gross2*9)/100)+200;  //It give the value of gross2
	gross3=((gross3*9)/100)+200;  //It give the value of gross3
	average=(gross1+gross2+gross3)/3;   //It give the average
	cout<<"Average="<<average<<endl<<"gross1="<<gross1<<endl<<"gross2="<<gross2<<endl<<"gross3="<<gross3<<endl;
	{
		if(gross1>gross2&&gross1>gross3)   //When gross1 is greater than it print
		cout<<"Maximum gross1="<<gross1<<endl;
		if(gross2>gross1&&gross2>gross3)   //When gross2 is greater than it print
		cout<<"Maximum gross2="<<gross2<<endl;
		if(gross3>gross1&&gross3>gross2)   //When gross3 is greater than it print
		cout<<"Maximum gross3="<<gross3<<endl;
	}
	{
		if(gross1<gross2&&gross1<gross3)   //when gross1 is smaller than it print
		cout<<"Minimum gross1="<<gross1<<endl;
		if(gross2<gross1&&gross2<gross3)   //when gross2 is smaller than it print
		cout<<"Minimum gross2="<<gross2<<endl;
		if(gross3<gross1&&gross3<gross2)   //When gross3 is smaller than it print
		cout<<"Minimum gross3="<<gross3<<endl;
	}
	return 0;
}
