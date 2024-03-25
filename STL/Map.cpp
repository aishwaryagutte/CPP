#include <iostream>
#include <map>
#include <utility>
using namespace std;

int main(){
	map <int, string> m;
	m.insert({5,"aish"});    //o(log n)
	m[2] = "kgkg";
	m.insert(make_pair(9,"tltl"));
	
	map <int, string> :: iterator itr = m.begin();
	while(itr != m.end()){
		cout << itr -> first << " " << (*itr).second << " " << endl;
		itr++;
	}
	
	//shortcut use auto instead of writing and declaring iterator
	auto it = m.begin();
	cout << endl;
	while(it != m.end()){
		cout << it -> first << " " << (*it).second << " " << endl;
		it++;
	}
	
	//shortcut using range based loops
	cout << endl;
	for(pair<int,string> value : m){
		cout << value.first << " "<< value.second << endl;
	}
	
	//in value -- gets copy of values of m
	cout << endl;
	for(auto value : m){
		cout << value.first << " "<< value.second << endl;
	}
	
	//& is reference -- gets original values of m
	cout << endl;
	for(auto &value : m){
		cout << value.first << " "<< value.second << endl;
	}
	
	if(m.find(5) != m.end()){
		m.erase(5);
	}
	
	cout << endl;
	for(auto value : m){
		cout << value.first << " "<< value.second << endl;
	}
}
