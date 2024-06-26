#include <iostream>
#include <thread>
#include <mutex>
using namespace std;

int count = 0;
std::mutex m;

void increment(){	
	for(int i = 0;i < 100000;i++){
		m.lock();
		count++;
		m.unlock();
	}
}

int main(){
	std::thread t1(increment);
	std::thread t2(increment);
	
	t1.join();
	t2.join();
	
	cout << count;
}
