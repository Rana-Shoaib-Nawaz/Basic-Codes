#include<iostream>
using namespace std;
main()
{
	int number,remainder,remainder1,remainder2,remainder3,remainder4,remainder5,qoution,qoution1,qoution2,qoution3;
	cout<<"Enter the number :";
	cin>>number;
	remainder=number%10;    //it is remainder
	qoution=number/10;
	remainder1=qoution%10;  //it is remainder
	qoution1=qoution/10;
	remainder2=qoution1%10; //it is remainder
	qoution2=qoution1/10;
	remainder3=qoution2%10;  //it is remainder
	qoution3=qoution2/10;
	remainder4=qoution3%10;  //it is remainder
	cout<<remainder<<remainder1<<remainder2<<remainder3<<remainder4;
}
