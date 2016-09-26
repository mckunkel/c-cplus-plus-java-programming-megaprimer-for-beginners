/*
class2.cpp
Mike

*/
#include <iostream>
using namespace std;

class Packet{

public:
	double len;
	double wid;
	double hei;

	double getVolume(void);
	void setLength(double lenA);
	void setWidth(double widA);
	void setHeight(double heiA);
};
double Packet::getVolume(void){
	return len*wid*hei;
}
void Packet::setLength(double lenA){
	len = lenA;
}
void Packet::setWidth(double widA){
	wid = widA;
}
void Packet::setHeight(double heiA){
	hei = heiA;
}
int main(){

	Packet p1;
	Packet p2;

	double v = 0.0;

	p1.setLength(3.0);
	p1.setWidth(3.0);
	p1.setHeight(3.0);

	p2.setLength(3.0);
	p2.setWidth(4.0);
	p2.setHeight(6.0);

	v = p1.getVolume();
	cout<<v<<"  "<<endl;

	v = p2 .getVolume();
	cout<<v<<"  "<<endl;

return 0;
}
