#include <iostream>
#include <tuple>
using namespace std;

int main(){
	tuple <int,string,int> t1;
	t1=make_tuple(1,"sama",4);
	cout<<"\nElements: "<<get <0> (t1)<<" "<<get <1> (t1)<<" "<<get <2> (t1); 
	return 0;
}
