#include <iostream>
using namespace std;

class A{
	int no;
	public: 
	void setNo(int n){
		no = n;
	}
	int getNo(){
		return no;
	}
	void setNo(){                  //method overloading
		no = 0;
	}
};
int main(){
	A a;
	a.setNo();
	cout << "No is: "<< a.getNo();
	a.setNo(5);
	cout << "\nNo is: "<< a.getNo();
	return 0;
}
