#include <iostream>
using namespace std;

class Trial{
	int a;
	public:
	static int b;
	void setData(int a,int b){
		this -> a = a;
		this -> b = b; 
	}
	void showData(){
		cout<<"\n a is: "<<a<<"  b is: "<<b;
	}
	
};
int Trial::b = 10;  //he lihilya nantr cha b la memory bhetati & at the start of the program la cha ekdacha create hoto not depend on object
int main(){
	cout<<"Before any object b value is: "<<Trial::b;
	cout<<"\nAddress of b at start is: "<<&(Trial::b);
	Trial t;
	t.setData(9,10);
	t.showData();
	cout<<"\nAddress of t1.b is: "<<&(t.b);
	
	Trial t1;
	t1.setData(14,15);
	t1.showData();
	cout<<"\nAddress of t2.b is: "<<&(t1.b);
	return 0;
}
