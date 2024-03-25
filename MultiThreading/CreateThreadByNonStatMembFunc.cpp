#include <iostream>
#include <thread>
using namespace std;

class Base{
	public:
	void fun(int x){
		while(x-- > 0){
			cout << "x is: " << x << endl;
		}
	}
};

int main(){
	Base b1;
	std::thread t1(&Base::fun, b1, 10);
	t1.join();
}


