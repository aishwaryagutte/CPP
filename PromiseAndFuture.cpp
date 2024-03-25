#include <iostream>
#include <thread>
#include <mutex>
#include <future>
#include <chrono>
#include <algorithm>
using namespace std;
typedef unsigned long long ull;

void findOdd(std::promise<ull>&& oddSumPromise, ull start, ull end){
	ull oddSum = 0;
	for(ull i = start;i <= end; ++i){
		if(i & 1){
			oddSum += i;
		}
	}
	oddSumPromise.set_value(oddSum);			//Setting oddsum to Promise oject and hyachi value get krt ahe future object in main.
}

int main(){
	ull start = 0, end = 190000000;
	
	std::promise<ull> oddSum;				//Created promise object
	std::future<ull> oddFuture = oddSum.get_future();	//Created future object
	
	cout << "Thread Created!!" << endl;
	std::thread t1(findOdd, std::move(oddSum), start, end);	//Moving promise object
	
	cout << "Waiting for Result!!" << endl;
	
	cout << "OddSum: " << oddFuture.get() << endl;		//Getting Future object value
	
	cout << "Completed!!" << endl;
	t1.join();
	return 0; 
}
