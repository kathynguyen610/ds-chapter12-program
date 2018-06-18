#include <iostream>
#include "arrayListType.h"
using namespace std;

//Constructor creates an array with a max size of var s
arrayListType::arrayListType(int s){
	if (s <= 0) {
		cout << "The array size cannot be negative. Creating an array with 100 elements..." << endl;
		maxSize = 100;
	}
	else {
		maxSize = s;
		length = 0;
		list = new int[maxSize];
	}
}

//Deconstructor
arrayListType::~arrayListType(){
}

//Prints the array in a line
void arrayListType::print(){
	for (int i = 0; i < length; i++) {
		cout << list[i] << " ";
	}
	cout << endl;
}

int arrayListType::seqSearch(int searchItem) const{
	return 0;
}

void arrayListType::insertEnd(int num) {

}