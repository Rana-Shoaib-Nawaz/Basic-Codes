#include<iostream>
using namespace std;
main()
{
	double number,diameter,radius,area,length,width,height,base,h,r,a,b;
	cout<<"Enter the number :";
	cin>>number;
	if(number<0||number>5)      //It execute when the number is small than zero or large than 5
	cout<<"Error message";
	else if(number==1&&number>0)  //It execute when it enter 1
	{
	cout<<"Enter the diameter :";
	cin>>diameter;
	radius=diameter/2;
	radius=radius*radius;
	area=3.14159*radius;
	cout<<"Area="<<area;
	}
	else if(number==2)           //It execute when it enter 2
	{
	cout<<"Enter the length :";
	cin>>length;
	cout<<"Enter the width";
	cin>>width;
	area=length*width;
	cout<<"Area="<<area;
	}
	else if(number==3)         //It execute when it enter 3
	{
	cout<<"Enter the height :";
	cin>>height;
	cout<<"Enter the base :";
	cin>>base;
	area=height*base*0.5;
	cout<<"Area="<<area;
	}
	else if(number==4)       //It execute when it enter 4
	{
	cout<<"Enter the height :";
	cin>>h;
	cout<<"Enter the diameter :";
	cin>>diameter;
	r=diameter/2;
	area=2*3.14*r*r+h*(2*3.14*r);
	cout<<"Area="<<area;
	}
	else if(number==5)     //It execute when it enter 5
	{
	cout<<"Enter the basa a ";
	cin>>a;	
	cout<<"Enter the base b ";
	cin>>b;
	cout<<"Enter the height ";
	cin>>h;
	area=h*((a+b)/2);
	cout<<"Area="<<area;
	}
	return 0;
}
