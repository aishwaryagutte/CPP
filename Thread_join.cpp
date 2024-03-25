#include <iostream>
#include <thread>
#include <chrono>
using namespace std;

void fun(int x){
	while(x-- > 0){
		cout << "x is: " << x << endl;
	}
	std::this_thread::sleep_for(chrono::seconds(5));  //sleep for 5 sec
}

int main(){
	std::thread t1(fun, 10);
	
	t1.join();   /// wait to complete t1
	
	cout << "\nMain Function: ";
	
	if(t1.joinable())     
		t1.join();
	cout << "\nMain Function After: ";
}



