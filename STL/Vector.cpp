#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<int> v1;
	v1.push_back(10);
	cout << "Capacity is: " << v1.capacity(); 
	v1.push_back(20);
	v1.push_back(30);
	cout << "\nCapacity is: " << v1.capacity(); 
	
	for(int i = 0; i < 3; i++)
		cout <<"\n "<< v1.at(i);
		
	v1.pop_back();
	cout << "\nAfter pop Capacity is: " << v1.capacity() << endl; 
	
	//Printing vector by using iterator
	vector<int> :: iterator it = v1.begin();
	while(it != v1.end()){
		cout << *it << endl; 
		it++;
	}
	
	cout << endl << "v.back():  " << v1.back();
	cout << endl << "v.front():  "<< v1.front()<< endl;
	
	//Printing vector reversly by using reverse iterator
	vector<int> :: reverse_iterator it1 = v1.rbegin();
	while(it1 != v1.rend()){
		cout << *it1 << endl; 
		it1++;
	}
	return 0;
}
