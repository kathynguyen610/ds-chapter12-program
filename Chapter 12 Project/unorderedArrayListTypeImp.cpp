#include <iostream>
#include "unorderedArrayListType.h"
using namespace std;



void unorderedArrayListType::insertAt(int location, int insertItem)
{
}

void unorderedArrayListType::insertEnd(int insertItem){
	if (length >= maxSize) { //the list is full
		cout << "Cannot insert in a full list." << endl;
	}
	else {
		list[length] = insertItem; //insert the item at the end
		length++;
	}
}

void unorderedArrayListType::replaceAt(int location, int repItem)
{
}

int unorderedArrayListType::seqSearch(int searchItem) const
{
	return 0;
}

void unorderedArrayListType::remove(int removeItem)
{
}

unorderedArrayListType::unorderedArrayListType(int s):arrayListType(s){
}
