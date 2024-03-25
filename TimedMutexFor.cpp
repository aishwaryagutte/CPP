#include <iostream>
#include <thread>
#include <mutex>
#include <chrono>
using namespace std;

int myAmount = 0;
std::timed_mutex m;

void increment(int i){	
	if(m.try_lock_for(std::chrono::seconds(1))){	// Wait for 1 sec and if not got lock then return false and so snother work
		++myAmount;
		
		std::this_thread::sleep_for (std::chrono::seconds(2));
		cout << "Thread: " << i << " Entered" << endl;
		
		m.unlock();
	}
	else{
		cout << "Thread: " << i << " Couldn't Entered" << endl;
	}
}

int main(){
	std::thread t1(increment, 1);
	std::thread t2(increment, 2);
	
	t1.join();
	t2.join();
	
	cout << myAmount << endl;
}


