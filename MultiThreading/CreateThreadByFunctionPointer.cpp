#include <iostream>
#include <thread>
using namespace std;

//Name of the function stores the address of the function
void fun(int x){
	while(x-- > 0){
		cout << "x is: " << x << endl;
	}
}

int main(){
	std::thread t1(fun,10);
	t1.join();
}
