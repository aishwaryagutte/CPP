#include <iostream>
#include <thread>
using namespace std;

int main(){
	//lambda funstions are nameless function that returns the address of the function....
	//in lambda function at start having [] and then normal function
	
	auto fun = [](int x){
	while(x-- > 0){
		cout << "x is: " << x << endl;
	}
	};
	std::thread t1(fun,10);
	t1.join();
}

