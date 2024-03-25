#include <iostream>
#include <thread>
#include <mutex>
#include <chrono>
using namespace std;

int x = 0,y = 0;
std::mutex m1,m2;

void doSomething(int sec){
	std::this_thread::sleep_for(chrono::seconds(sec));
}

void increment(int& XorY, std::mutex& m, const char* desc){	
	for(int i = 0;i < 5;i++){
		m.lock();
			++XorY;
		cout << desc << XorY << "\n";
		m.unlock();
		doSomething(1);
	}
}

void consume(){
	int useCount = 5;
	int xPlusy = 0;
	
	while(1){
		int lockResult = std::try_lock(m1,m2);			//lock m1 and m2 mutex instead of m1.lock and m2.lock. If m1 and m2 both locked then it will return -1 else return index jo mutex lock zala nahi tyacha and unlock jyala lock bhetlet te..
		
		if(lockResult == -1){
			if(x != 0 && y != 0){
				--useCount;
				xPlusy+= x + y;
				x = 0;
				y = 0;
				cout << "\n XPlusY is: " << xPlusy << endl;
			}
		}
		m1.unlock();
		m2.unlock();
		if(useCount == 0)
			break;
	}
}

int main(){
	std::thread t1(increment, std::ref(x), std::ref(m1), "X ");
	std::thread t2(increment, std::ref(y), std::ref(m2), "Y ");
	std::thread t3(consume);
	
	t1.join();
	t2.join();
	t3.join();
	
	return 0;
}


