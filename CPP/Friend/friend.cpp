/*
friend.cpp
Mike

*/

#include <iostream>
using namespace std;

class Packet{
	double wid;
public:
	friend void widthValue(Packet packet);
	void setWid(double widA);

};

void Packet::setWid(double widA){
	wid = widA;
}
void widthValue(Packet packet){
	cout<<packet.wid<<endl;
}
int main(){

	Packet packet;
	packet.setWid(100.1);
	widthValue(packet);


return 0;
}
