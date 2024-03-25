#include <iostream>
using namespace std;

template <typename A>
A big(A a,A b){
	if(a > b)
		return a;
	else
		return b;
}
int main(){
	cout << endl << big(5,7);
	cout << endl << big(7.7,5.7);
	return 0;
}
