#include <iostream>
#include "unorderedArrayListType.h"
using namespace std;

//Constructor
unorderedArrayListType::unorderedArrayListType(int s): arrayListType(s) {
}

//Inserts numbers at the end of the list
void unorderedArrayListType::insertEnd(int insertItem){
	if (length >= maxSize) { //the list is full
		cout << "Cannot insert in a full list." << endl;
	}
	else {
		list[length] = insertItem; //insert the item at the end
		length++; //increase the list length
	}
}

//Finds the smallest number in the list.
int unorderedArrayListType::min() {
	int smallNum = list[0]; //starts with first number of the array
	for (int i = 0; i < length; i++) {
		//if smallNum is greater than the array number, smallNum equals the number
		if (smallNum > list[i]) { 
			smallNum = list[i];
		}
	}
	return smallNum;
}

void unorderedArrayListType::replaceAt(int location, int repItem) {
}

int unorderedArrayListType::seqSearch(int searchItem) const {
	return 0;
}

void unorderedArrayListType::remove(int removeItem) {
}

void unorderedArrayListType::insertAt(int location, int insertItem){
}