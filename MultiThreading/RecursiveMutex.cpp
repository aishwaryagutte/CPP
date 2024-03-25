#include <iostream>
#include <thread>
#include <mutex>
using namespace std;

std::recursive_mutex m;
int buffer = 0;

void recursion(char c, int loopfor){

	if(loopfor < 0)
		return;
	
	m.lock(); 							//m is recursive mutex... 
	
	cout << "ThreadID: " << c << " " << buffer++ << endl;
	recursion(c, --loopfor);
	
	m.unlock();							//Jevdhya veles lock bhetel tevdhya veles unlock honar..
	cout << "Unlock by thread: " << c << endl;
}

int main(){
	std::thread t1(recursion, '1', 10);
	std::thread t2(recursion, '2', 10);
	
	t1.join();
	t2.join();
	return 0;
}
