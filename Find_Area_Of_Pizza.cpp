#include<iostream>
using namespace std;
main()
 {
	double diameter,slice,area,pi;
	cout<<"Enter the diameter :";
	cin>>diameter;
	pi=3.14;
	area=pi*(diameter/2)*(diameter/2);
	slice=area/14.125;
	cout<<"Area of pizza "<<area<<endl<<"Number of slice "<<slice;
	return 0;
 }
