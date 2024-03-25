#include <iostream>
#include <thread>
#include <mutex>
#include <future>
#include <chrono>
#include <algorithm>
using namespace std;
typedef unsigned long long ull;

ull findOdd(ull start, ull end){
	ull oddSum = 0;
	cout << "ThreadId: "<< std::this_thread::get_id() << endl;
	for(ull i = start;i <= end; ++i){
		if(i & 1){
			oddSum += i;
		}
	}
	return oddSum;
}

int main(){
	ull start = 0, end = 190000000;
	
	cout << "ThreadId: "<< std::this_thread::get_id() << endl;
	cout << "Thread Created if policy is std::launch::async!!" << endl;
	
	//std::future<ull> oddSum = std::async(std::launch::deferred, findOdd, start, end);	//deferred: not create thread and also not excute ossSum method. Jevha oddUm.get krto tevha oddSum execute hot..tyala kalt ki exceute karaychay..hya line n fakt creates entry
	std::future<ull> oddSum = std::async(std::launch::async, findOdd, start, end);		//async: create thread
	
	cout << "Waiting for Result!!" << endl;
	cout << "OddSum: " << oddSum.get() << endl;		//Getting Future object value
	cout << "Completed!!" << endl;
	
	return 0; 
}

