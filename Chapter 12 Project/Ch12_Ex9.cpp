//Kathy Nguyen
//Date: 6/18/2018
//Assignment: Chapter 12 Program

#include <iostream>
#include "unorderedArrayListType.h"

using namespace std;

int main()
{
	unorderedArrayListType intList(25);

	int number;

	cout << "Enter 8 integers: ";

	for (int count = 0; count < 8; count++)
	{
		cin >> number;
		intList.insertEnd(number);
	}

	cout << endl;
	cout << "intList: ";
	intList.print();
	cout << endl;

	cout << "The smallest number in intList: "
		<< intList.min() << endl;
	system("pause");
	return 0;
}