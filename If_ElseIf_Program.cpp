#include<iostream>
using namespace std;
int main()
{
	int x;  // to store value
	cout<<" 1. If"<<endl;                   
	cout<<" 2. If-then else "<<endl;                       
	cout<<" 3. if and else if"<<endl;                           
	cout<<" 4. Nested if statements"<<endl;
	 
	cout<<"Select one:"<<endl;
	cin>>x;
	if(x==1){ 
		cout<<"If(Expression)"<<endl<<"Cout<<'code'";
	}
	else if (x==2){  
		cout<<"        if(Expression){"<<endl<<"cout<<code"<<endl<<"}"<<endl<<"else"<<endl<<"1'code'";
	}
		else if (x==3){
		cout<<"if(Expression){"<<endl<<"cout<<'code'"<<endl<<"}"<<endl<<"else if(Expression){"<<endl<<"'code' "<<endl<<"}";
	}
		else if (x==4){  
		cout<<"if(Expression){"<<endl<<"cout<<'code'"<<endl<<"}"<<endl<<"if(Expression){ "<<endl<<"cout<<'code' "<<endl<<"}";
	}
	return 0;
}
