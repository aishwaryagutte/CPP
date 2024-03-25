#include <iostream>
using namespace std;


int main(){
	int * p;
	p = (int *) malloc (3 * sizeof(int));
	*(p+0) = 3 ;
	*(p+1) = 5;
	*(p+2) = 7;
	cout<<"\nValues in p are:   "<<*(p+0)<<" "<<*(p+1)<<" "<<*(p+2)<<" ";
	cout<<"\nAddresses of 0,1,2 p are:   "<<(p+0)<<" "<<(p+1)<<" "<<(p+2)<<" ";
	cout<<"\nAddress of p is:   "<<&p;
	cout<<"\nAddresses of 0,1,2 p are by ++:   "<<p<<" "<<++p<<" "<<++p<<" ";
	
	
	char * p1;
	p1 = (char *) malloc (3 * sizeof(char));
	*(p1+0) = 'a';
	*(p1+1) = 'z';
	*(p1+2) = 'b';
	cout<<"\n\n\nValues in p1 are:   "<<*(p1+0)<<" "<<*(p1+1)<<" "<<*(p1+2)<<" ";
	cout<<"\nAddresses of 0,1,2 p1 are:   "<<(p1+0)<<" "<<(p1+1)<<" "<<(p1+2)<<" ";
	cout<<"\nAddress of p1 is:   "<<&p1;
	cout<<"\nAddresses of 0,1,2 index p1 are by ++:   "<<p1<<" "<<++p1<<" "<<++p1<<" ";
	
	std::byte * b;
	b = (byte *) malloc (3 * sizeof(byte));
	*(b+0) = 0xaa;
	*(b+1) = 0xaa;
	*(b+2) = 0xaa;
	cout<<"\n\n\nValues in p1 are:   "<<*(b+0)<<" "<<*(b+1)<<" "<<*(b+2)<<" ";
	cout<<"\nAddresses of 0,1,2 p1 are:   "<<(b+0)<<" "<<(b+1)<<" "<<(b+2)<<" ";
	cout<<"\nAddress of p1 is:   "<<&b;
	cout<<"\nAddresses of 0,1,2 index p1 are by ++:   "<<b<<" "<<++b<<" "<<++b<<" ";
	
	
	void * v = & p1;
	//cout<<"\nAddresses of 0,1,2 p1 are:   "<<*(v+0)<<" "<<*(v+1)<<" "<<*(v+2)<<" ";
	return 0;
}
