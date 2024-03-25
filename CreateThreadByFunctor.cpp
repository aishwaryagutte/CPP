#include <iostream>
#include <thread>
using namespace std;

class Base{
	public:
	//Functor or Function Object is same as overloading () operator....
	void operator ()(int x){
		while(x-- > 0){
			cout << "x is: " << x << endl;
		}
	}
};

int main(){
	std::thread t1(Base(),10);
	t1.join();
}

