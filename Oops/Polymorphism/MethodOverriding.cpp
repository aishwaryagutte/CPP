#include <iostream>
using namespace std;

class A{
	public:
	void print(){
		cout <<"\n Parent Method...";
	}
};

class B: public A{
	public:
	void print(){
		cout <<"\n Child Method...";
	}
};

int main(){
	A a;
	a.print();
	B b;
	b.print();
	return 0;
}
