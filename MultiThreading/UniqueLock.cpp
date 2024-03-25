#include <iostream>
#include <thread>
#include <mutex>
using namespace std;

std::mutex m;
int buffer = 0;

void task(char c, int loopfor){

	std::unique_lock<mutex> lock(m);   //Automatically calls lock on mutex m and unlock in destructor
	  
	for(int i =0;i < loopfor;i++){
		buffer++;
		cout << "ThreadID: " << c << " " << buffer << endl;
	}
}

int main(){
	std::thread t1(task, '1', 10);
	std::thread t2(task, '2', 10);
	
	t1.join();
	t2.join();
	return 0;
}


