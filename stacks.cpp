#include <iostream>

using namespace std;

template <class T>
class Node {
	public:
		T data; //"data" or "value"
		Node *next;
		
};


template <class T>
class SimpleList {
	public:
		Node<T> *head;
		Node<T> *last;
		string getName();

	private:
		string name;
		
};

SimpleList::getName() {
	return this->name;
}

int main(){
	cout << "Hi" << endl;
}
