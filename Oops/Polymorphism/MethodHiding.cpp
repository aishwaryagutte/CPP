#include <iostream>
using namespace std;

class A{
	public:
	void print(){
		cout<<"\nParent print..";	
	}
};

class B{
	public:
	void print(int p){				//Hiding parent method...method hiding..
		cout<<"\nChild print..p is: "<<p;	
	}
};

int main(){
	A a;
	a.print();
	B b;
	//b.print();
	b.print(5);
	return 0;
}
