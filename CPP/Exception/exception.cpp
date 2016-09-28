/*
 exception.cpp
 michaelkunkel
 */
#include <iostream>
using namespace std;
double divide(int x, int y) {
	if (y == 0) {
		throw "zero in denominator is not accepted";
	}
	return (x / y);
}

int main() {
	int a = 40;
	int b = 0;

	double c;

	try {
		c = divide(a, b);
		cout << "The result is " << c << endl;
	} catch (const char* msg) {
		cerr << msg << endl;
	}


	return 0;
}
