#include <iostream>
#include <thread>
#include <mutex>
using namespace std;

int bankBalance = 0;
std::mutex m;

void addMoney(int val){	
	if(val < 0){
		return;
	}
	
	m.lock();
	bankBalance+=val;
	m.unlock();
}

int main(){
	std::thread t1(addMoney, 100);
	std::thread t2(addMoney, 200);
	
	t1.join();
	t2.join();
	
	cout << "Final Bank balance is: " << bankBalance << endl;
	return 0;
}

