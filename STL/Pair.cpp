#include <iostream>
#include <utility>
using namespace std;

class Student{
	int rollNo;
	int age;
	public:
	void InsertData(){
		cout<<"\nEnter roll no.: ";
		cin>>rollNo;
		cout<<"\nEnter age: ";
		cin>>age;
	}
	void getStudentInfo(){
		cout<<"\nRoll No of student is: "<<rollNo;
		cout<<"\nAge of student is:"<<age;
	}
};
int main(){
	pair<string,int> p1;
	p1=make_pair("Aish",1);
	cout<<"\nFirst tuple is:  "<<p1.first<<" "<<p1.second;
	
	pair <Student,string> p2;
	Student s1;
	s1.InsertData();
	p2=make_pair(s1,"Ritesh");
	Student s2 = p2.first;
	s2.getStudentInfo();
	cout<<"\nName is: "<<p2.second;
	return 0;
}

