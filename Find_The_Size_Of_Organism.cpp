#include<iostream>
using namespace std;
main()
{
	int number_of_days;
	double starting_number,daily_increase,current_population,i,n,g,r;	
	i=0;
	cout<<"Enter the starting number :";
	cin>>starting_number;
	for(n=0;n<5;n++)//it run when it is less than 2
	{
		if(starting_number<2)
		{
		cout<<"You enter negative number try again"<<endl;
		cout<<"Enter the starting number :";
		cin>>starting_number;
		}	
	}
		cout<<"Enter the daily increase :";
		cin>>daily_increase;
		for(g=0;g<5;g++)//it run when it is negative
		{
		if(daily_increase<1)
			{
			cout<<"You enter negative number try again"<<endl;
			cout<<"Enter the daily increase :";
			cin>>daily_increase;
			}
		}
		cout<<"Enter the number of days :";
		cin>>number_of_days;
		for(r=0;r<5;r++)//it run when it is negative
		{
			if(number_of_days<1)
			{
			cout<<"You enter negative number try again"<<endl;
			cout<<"Enter the number of days :";
			cin>>number_of_days;
			}
		}
		while(i<number_of_days)//it execute until i is not equal to number of days
		{
			current_population=starting_number*daily_increase/100;//it give average
			current_population=current_population*number_of_days;//adition
			i=i+1;//increment
		}
			cout<<"Size of organism="<<current_population;
}
