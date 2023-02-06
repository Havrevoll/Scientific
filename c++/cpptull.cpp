#include <iostream>
#include "Vector.hh"
using namespace std;

int main() {
	cout<<"hei"<<endl;

	Vector v(20);
	for(int i=0; i<20;i++) {
		v(i) = i;
	}
	Vector w1, w2;
	w1.shadow(v, 0 , 10);
	w2.shadow(v, 10, 10);
	w1.add(w2);
	w1.output("w1.txt");

	return 0;
}