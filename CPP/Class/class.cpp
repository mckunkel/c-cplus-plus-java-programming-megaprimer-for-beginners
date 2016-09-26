/*
class.cpp
Mike

*/
#include <iostream>
using namespace std;

class Packet{

public:
	double len;
	double wid;
	double hei;

};

int main(){

	Packet p1;
	Packet p2;

	double v = 0.0;
	p1.len = 3.0;
	p1.wid = 3.0;
	p1.hei = 3.0;
	p2.len = 3.0;
	p2.wid = 4.0;
	p2.hei = 5.0;

	v = p1.hei*p1.wid*p1.len;
	cout<<v<<"  "<<endl;

	v = p2.hei*p2.wid*p2.len;
	cout<<v<<"  "<<endl;

return 0;
}
