/*
dmemory.cpp
michaelkunkel
*/
#include <iostream>
using namespace std;

int main(){

	int a, *p, b;

	cout << "enter integer value: " << endl;
	cin >> a;

	p = new int[a];
	cout << "Enter  " << a << " Integers" << endl;
	for (int i = 0; i < a; ++i) {
		cin >> p[i];
	}
	cout << "you have entered : " << endl;
	for (int i = 0; i < a; ++i) {
		cout << p[i] << endl;
	}

	delete[] p;
	return 0;
}

