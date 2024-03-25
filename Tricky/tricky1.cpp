#include <iostream>
using namespace std;

class TimePass{
	int anyNumber;
	public:
	void insert(){
		cout<<"\n Enter number: ";
		cin>>anyNumber;
	}
	void write(){
		cout<<"\n Writing in Timepass class....";
	}
};
int main(){
	TimePass* p = NULL;
	p->write();
	return 0;
}
