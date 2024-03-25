#include <iostream>
#include <map>
using namespace std;

//Find frequency of unique strings and print strings in lexicographic order
int main(){
	map<string,int> m;
	int q;
	cin >> q;
	while(q > 0){
		string s;
		cin >> s;
		m[s]++;
		q--;
	}
	for(auto value : m){
		cout << value.first << " "<< value.second << endl;
	}
}

