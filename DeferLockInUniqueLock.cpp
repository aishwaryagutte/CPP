#include <iostream>
#include <thread>
#include <mutex>
using namespace std;

std::mutex m;
int buffer = 0;

void task(char c, int loopfor){

	std::unique_lock<mutex> lock(m, std::defer_lock);  //owening m mutex but not locking as we used defer_lock.
	//............ je vatal te work kara yethe ani jevha pahije tevha lock kra by using lock.lock();
	
	lock.lock();
	
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


