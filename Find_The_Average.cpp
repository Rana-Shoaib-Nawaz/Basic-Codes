#include<iostream>
using namespace std;
main()
{
	int score1,score2,score3;
	float average;
	cout<<"Enter the score1 :";
	cin>>score1;
	cout<<"Enter the score2 :";
	cin>>score2;
	cout<<"Enter the score3 :";
	cin>>score3;
	average=(score1+score2+score3)/3;
	cout<<"Average="<<average;
	return 0;
}
