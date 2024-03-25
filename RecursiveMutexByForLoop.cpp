#include <iostream>
#include <thread>
#include <mutex>
using namespace std;

std::recursive_mutex m;

int main(){
	for(int i = 0;i < 5;i++){
		m.lock();
		std::cout << "Locked: " << i << endl;
	}
	
	for(int i = 0;i < 5;i++){
		m.unlock();
		std::cout << "Unlocked: " << i << endl;
	}
}
