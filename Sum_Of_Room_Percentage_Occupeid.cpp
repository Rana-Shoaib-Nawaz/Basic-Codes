#include<iostream>
using namespace std;
main()
{
	int f,t,y,z,a,r,n,sum,attempt,o,m,i;
	m=0;
	t=0;
	f=1;
	n=0;
	attempt=0;
	sum=0;
	cout<<"Enter the floors  :";
	cin>>f;
	for(i=0;i<5;i++)//it run when floor is less than 1
	{	
	if(f<1)
		{
			cout<<"You enter negative value try again"<<endl;
			cout<<"Enter the floors  :";
			cin>>f;
		}
	}
	while(t<f)//it run until t is not equal to f
	{
		cout<<"floor="<<attempt+1<<endl;
		attempt++;//it is counter
		cout<<"Enter the rooms :";
		cin>>r;
		for(z=0;z<5;z++)//it run when room is less than 10
		{
			if(r<10)
			{
				cout<<"You enter less than 10 try again"<<endl;
				cout<<"Enter the rooms :";
				cin>>r;
			}
		}
		cout<<"Enter the rooms occupied:";
		cin>>o;
		t=t+1;//it increment
		n=n+o;
		sum=sum+r;//it edition
	}
		m=(n*100)/sum;//percentage
		cout<<"sum of rooms="<<sum<<endl<<"occupied rooms percentage="<<m<<"%";
}
