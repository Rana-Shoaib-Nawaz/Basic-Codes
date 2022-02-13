#include<iostream>
using namespace std;
main()
{
	int mealcost,division;
	float taxamount,tip,totalbill,percentage,total,percent;
	mealcost=4450;
	division=100;
	percent=15;
	percentage=6.75;
	taxamount=mealcost*percentage/division;
	total=mealcost+taxamount;
	tip=total*percent/division;
	totalbill=total;
	cout<<" mealcost="<<mealcost<<" taxamount="<<taxamount<<" tip="<<tip<<" totalbill="<<totalbill;
	return 0;
}
