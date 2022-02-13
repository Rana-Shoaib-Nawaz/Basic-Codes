#include<iostream>
using namespace std;
main()
{
	int number1,a,b,c,d,e,f,g,h,i,j,k,l,m,n,p,y,z;
	cout<<"Enter the number :";
	cin>>number1;
	a=y%19;  //Taking modulus
	b=y/100; //Dividing
	c=y%100; //Taking modulus
	d=b/4;   //Dividing
	e=b%4;   //Taking modulus
	f=(b+8)/25;
	g=(b-f+1)/3;
	h=(19*a+b-d-g+15)%30;
	i=c/4;
	k=c%4;
	l=(32+2*e+2*i-h-k)%7;
	m=(a+11*h+22*l)/451;
	n=(h+l-7*m+114)/31;
	p=(h+l-7*m+114)%31;	
	z=10*(p+1)+n;
	cout<<z;
	return 0;
}

