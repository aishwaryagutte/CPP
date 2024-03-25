#include <iostream>
using namespace std;

template <typename T> class list{
	int size;
	T * arr;
	int capacity;
	public:
	list(){
		arr = (T *) calloc(1,sizeof(int));
		size = 0;
		capacity = 1;
	}
	void add(int number){
		if((*arr) == 0){
			*arr = number;
			size++;
		}
		else{
			if(size >= capacity){
				arr = (T *) realloc(arr, (sizeof(int))*(capacity*2));
				capacity *= 2;
				cout<<"size is: "<<size;
			}
			arr[size] = number;
			size++;
			cout<<endl<<"Array size is: "<<sizeof(arr+0)/sizeof(int)<<" ";
		}
	}
	void print(){
	//cout<<endl<<"----------------"<<*(arr)<<" "<<arr++;
		cout<<"\n Values in array: ";
		for(int i=0;i<this->size;i++){
			cout<<*(arr+i)<<" ";
		}
	}
	int getCapacity(){
		return this->capacity;
	}
	void removeLast(){
		this->arr[(this->size)-1] = 0;
		this->size--;
	}
};

int main()
{
	list <int> l1;
	l1.add(1);
	cout<<"Capacity is: "<<l1.getCapacity()<<" ";
	l1.add(2);
	cout<<"Capacity is: "<<l1.getCapacity()<<" ";
	l1.add(3);
	cout<<"Capacity is: "<<l1.getCapacity()<<" ";
	l1.add(4);
	cout<<"Capacity is: "<<l1.getCapacity()<<" ";
	l1.add(5);
	cout<<"Capacity is: "<<l1.getCapacity()<<" ";
	l1.add(6);
	l1.add(7);
	l1.add(8);
	l1.add(9);
	l1.add(10);
	l1.add(11);
	cout<<"Capacity is: "<<l1.getCapacity()<<" ";
	l1.print();
	l1.removeLast();
	l1.print();
	cout<<endl<<"Char array...";
	list <char> l2;
	l2.add('z');
	cout<<"Capacity is: "<<l2.getCapacity()<<" "<<endl;
	l2.print();
	return 0;
}
