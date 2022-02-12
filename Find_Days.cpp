#include<iostream>
using namespace std;
main()
{
	int second,minute,hour,day;
	cout<<"Enter the second :";
	cin>>second;
	minute=second/60;    //second divide
	hour=minute/60;      //minute divide
	day=hour/24;        //hour divide
  {
	
	if(minute<=60)     //It execute when minute is less than 60
	{
	cout<<minute<<"minutes";
	}
    if(hour<=3600)
    {
	cout<<hour<<"hours";
	}
    if(day<=86400)
    {
	cout<<day<<"days";
	}
  }
  return 0;
}
