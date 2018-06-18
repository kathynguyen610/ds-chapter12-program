#ifndef H_arrayListType
#define H_arrayListType
class  arrayListType {
public:
	bool isFull() const;
	int listSize() const;
	int maxListSize() const;
	void print() const;
	bool isItemAtEqual(int location, int item) const;
	virtual void insertAt(int location, int insertItem) = 0;
	virtual void insertEnd(int insertItem) = 0;
	void print();
	void removeAt(int location);
	void retrieveAt(int location, int& retItem) const;
	virtual void replaceAt(int location, int repItem) = 0;
	void clearList();
	virtual int seqSearch(int searchItem) const;
	virtual void remove(int removeItem) = 0;

	int min();

	arrayListType(int size = 100);
	arrayListType(const arrayListType& otherList);
	//Constructor
	//Creates an arrat of the size specified by the
	//parameter size. The default array size is 100.
	//Postcondition: If removeItem is found in the list,
	//it is removed from the lsit and length is decremented by one.
	virtual ~arrayListType();


protected:
	int* list;
	int length;
	int maxSize;
};



#endif