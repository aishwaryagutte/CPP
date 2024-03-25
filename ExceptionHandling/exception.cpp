#include <iostream>
using namespace std;

void fun();
int main(){
	int number;
	cout<<"\nEnter number: ";
	cin>>number;
	try{
		if(number == 0)
	  		throw 0;
		cout<<20/number;
		fun();
	}
	catch(float e){
		cout<<"\nInvalid number float: "<<e;
	}
	catch(int e){
		cout<<"\nInvalid number int: "<<e;
	}
	return 0;
}

void fun(){
	throw 10.3f;
}
