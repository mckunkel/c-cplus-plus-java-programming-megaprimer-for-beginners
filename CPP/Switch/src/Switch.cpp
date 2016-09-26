/*
switch.cpp
Mike

*/
#include <iostream>
using namespace std;

int main(){

	char g = 'C';

	switch (g) {
		case 'A':
			cout<<" you got A grade"<<endl;
			break;
		case 'B':
			cout<<" you got B grade"<<endl;
			break;
		case 'C':
			cout<<" you got C grade"<<endl;
			break;
		case 'D':
			cout<<" you got D grade"<<endl;
			break;
		default:
			cout<<" your grade is not valid"<<endl;
			break;
	}

	cout<<"Color? "<<endl;
	char c[50];
	cin>>c;
	cout<<"is "<<c<<endl;



return 0;
}
