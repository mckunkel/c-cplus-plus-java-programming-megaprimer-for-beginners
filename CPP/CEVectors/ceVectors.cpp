/*
ceVectors.cpp
michaelkunkel
*/
#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<int> v = { 1, 2, 3, 4, 5 };
	cout << v.size() << endl;
	cout << v.front() << endl;
	cout << v.back() << endl;
	v.insert(v.begin() + 2, 20);
	cout << v.size() << endl;

	return 0;
}

