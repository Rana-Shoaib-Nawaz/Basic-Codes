#include<iostream>
using namespace std;
main()
{
	int slice,person,diameter;
	cout<<"Enter the number of persons :";
	cin>>person;
	slice=4*person;
	diameter=5*slice;
	cout<<"Slice="<<slice<<endl<<"Pizza="<<person<<endl<<"Diameter="<<diameter;
	return 0;
}
