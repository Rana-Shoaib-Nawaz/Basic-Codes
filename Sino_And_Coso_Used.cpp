#include<iostream>
#include<cmath>
using namespace std;
main()
{
	double angle1,angle2,x;
	cout<<"Enter the angle1 :";
	cin>>angle1;
	cout<<"Enter the angle2 :";
	cin>>angle2;
	x=sin(angle1)+cos(angle2);
	cout<<"x="<<x;
	return 0;
}
