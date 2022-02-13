#include<iostream>
using namespace std;
main()
{
	float oneshare,percent,share,amountpaid,commission,totalamount;
	int bought,division;
	division=100;
	bought=600;
	percent=2;
	oneshare=21.77;
	share=oneshare*bought;
	commission=share*percent/division;
	totalamount=share+commission;
	cout<<"amount paid without commission="<<share<<" amount paid with commission="<<commission<<" total amount="<<totalamount;
	return 0;
}
