#include <iostream>
using namespace std;

enum e1{
	Aish,
	Pragati,
	Ritesh,
	Samarth
};
int main(){
	//string s1 = Aish;
	//string s2 = Pragati tai;
	//string s3 = Samarth;
	e1 obj = Ritesh;
	if(obj == Ritesh)
		cout << obj <<endl;
	//if(obj == Aishh)
	//	cout << obj <<endl;
	return 0;
}
