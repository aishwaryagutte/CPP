#include <iostream>
using namespace std;

class dummy{
	int a;
	int b;
	int *p;
	public:
	void setData(int a,int b,int c){
		this -> a = a;
		this -> b = b;
		*p = c;
	}
	void showData(){
		cout<<"\na is: "<<a<<"  b is: "<<b<<"  p is: "<<p<<"  Value of p is: "<<*p;
	}	
	dummy(){
		p = new int;
	}
	//Shallow copy
	dummy(dummy &d){
		this -> a = d.a;
		this -> b = d.b;
		p = d.p;
	}
};
class dummy1{
	int a;
	int b;
	int *p;
	public:
	
	void setData(int a,int b,int c){
		this -> a = a;
		this -> b = b;
		*p = c;
	}
	void showData(){
		cout<<"\na is: "<<a<<"  b is: "<<b<<"  p is: "<<p<<"  Value of p is: "<<*p;
	}
	dummy1(){
		p = new int;
	}
	//Deep copy
	dummy1(dummy1 &d){
		this -> a = d.a;
		this -> b = d.b;
		p = new int;
		*p = *(d.p);
	}
	~dummy1(){
		delete p;
	}
};
int main(){
	dummy d;
	d.setData(6,7,8);
	d.showData();
	dummy d2 = d;
	d2.showData();
	
	cout<<"\nseocnd class";
	dummy1 d3;
	d3.setData(6,7,8);
	d3.showData();
	dummy1 d4 = d3;
	d4.showData();
	return 0;
}
