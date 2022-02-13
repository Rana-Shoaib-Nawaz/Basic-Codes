#include<iostream>
using namespace std;
main()
{
	string movie_name;
	int adult,child,adult_above,tickets1,tickets2,tickets3,net_box,gross_box,distributor;
	adult=500;
	child=250;
	adult_above=50;
	cout<<"Enter the movie name :";
	cin>>movie_name;
	cout<<"Enter the adult tickets :";
	cin>>tickets1;
	cout<<"Enter the child tickets :";
	cin>>tickets2;
	cout<<"Enter the above tickets of adult :";
	cin>>tickets3;
	adult=adult*tickets1;
	child=child*tickets2;
	adult_above=adult_above*tickets3;
	gross_box=adult+child+adult_above;
	net_box=(gross_box*20)/100;
	distributor=(gross_box*80)/100;
	cout<<"Movie name "<<movie_name<<endl<<"Adult tickets sold "<<adult<<endl<<"child tickets sold "<<child<<endl<<"Adult above 60 "<<adult_above<<endl<<"Gross box office profit "<<gross_box<<endl<<"Net box office profit "<<net_box<<endl<<"Amount paid to distributor "<<distributor;
	return 0;
}
