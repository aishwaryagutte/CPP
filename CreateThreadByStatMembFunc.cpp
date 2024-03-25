#include <iostream>
#include <thread>
using namespace std;

class Base{
	public:
	static void fun(int x){
		while(x-- > 0){
			cout << "x is: " << x << endl;
		}
	}
};

int main(){
	std::thread t1(Base::fun, 10);
	//std::thread t1(&Base::fun, 10);  //This also works
	t1.join();
}

