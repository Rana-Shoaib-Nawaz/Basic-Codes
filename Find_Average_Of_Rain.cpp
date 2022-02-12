#include<iostream>
using namespace std;
main()
{
	float millimeter,average;
	int rainfall1,rainfall2,rainfall3;
	cout<<"Enter the january rainfall :";
	cin>>rainfall1;
	cout<<"Enter the february rainfall :";
	cin>>rainfall2;
	cout<<"Enter the march rainfall :";
	cin>>rainfall3;
	average=(rainfall1+rainfall2+rainfall3)/3;
	cout<<"The average of rain for january , february & march is "<<average<<" millimeter";
	return 0;
}
