/*
CEconfig.cpp
michaelkunkel
*/
#include <iostream>
#include <vector>
using namespace std;

int main(){

	vector<string> x = { "Hello", "World" };
	for (string y : x) {
		cout << y << endl;
	}
	return 0;
}

