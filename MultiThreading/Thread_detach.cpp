#include <iostream>
#include <thread>
#include <chrono>
using namespace std;

void fun(int x){
	while(x-- > 0){
		cout << "x is: " << x << endl;
	}
	std::this_thread::sleep_for(chrono::seconds(5));
	
	cout << "\nFinish";
}

int main(){
	std::thread t1(fun, 10);
	
	cout << "\nMain Function: ";
	
	t1.detach();   /// Not wait to complete t1... main thread pn chalu honar ani band pn hou shkto... main thread wait nahi krnar t1 sathi
	
	cout << "\nMain Function After: ";
}




