#include <iostream>
#include "arrayListType.h"
using namespace std;

arrayListType::arrayListType(int s){
	if (s <= 0) {
		cout << "The array size cannot negative. Creating an array with 100 elements..." << endl;
		maxSize = 100;
	}
	else {
		maxSize = s;
		length = 0;
		list = new int[maxSize];
	}


}

arrayListType::~arrayListType()
{
}

void arrayListType::insertEnd(int num){

}

void arrayListType::print()
{
}

int arrayListType::seqSearch(int searchItem) const
{
	return 0;
}

int arrayListType::min()
{
	return 0;
}
