//============================================================================
// Name        : NameSpace.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

namespace first {
void abc() {
	cout << "I am first abc function" << endl;
}
}
namespace second {
void abc() {
	cout << "I am second abc function" << endl;
}
}
int main() {
	first::abc();
	second::abc();
	return 0;
}
