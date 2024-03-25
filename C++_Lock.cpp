#include <iostream>
#include <thread>
#include <mutex>
#include <chrono>
using namespace std;

std::mutex m1;
std::mutex m2;

void thread1(){
	std::lock(m1,m2);			//std lock... if m1 got lock and m2 not got lock then it will release lock of m1 also.
	std::this_thread::sleep_for(std::chrono::seconds(1));
	cout << "Critical section of Thread one\n";
	m1.unlock();
	m2.unlock();
}

void thread2(){
	std::lock(m2,m1);
	std::this_thread::sleep_for(std::chrono::seconds(1));
	cout << "Critical section of Thread two\n";
	m2.unlock();
	m1.unlock();
}

int main(){
	thread t1(thread1);
	thread t2(thread2);
	
	t1.join();
	t2.join();
	return 0;
}

