#include <iostream>
#include "IntArrayList.h"

using namespace std;

IntArrayList::IntArrayList()
{
    currSize = 0;
    capacity = 0;
    data     = nullptr;

    cerr << "IntArrayList nullary constructor" << endl;
}

IntArrayList::IntArrayList(int initialSize, ElemType initialValues[])
{
    currSize = initialSize;
    capacity = (initialSize * 2) + 2;

    data = new ElemType[capacity];
    for (int i = 0; i < currSize; ++i)
    {
        data[i] = initialValues[i];
    }

    cerr << "IntArrayList custom constructor" << endl;
}

IntArrayList::~IntArrayList()
{
    delete [] data;
    cerr << "IntArrayList destructor" << endl;
}

int IntArrayList::size()
{
    return this->currSize;
}

void IntArrayList::addAtBack(ElemType elt)
{
    if (currSize == capacity)
    {
        doubleCapacity();
    }
    data[currSize] = elt;
    ++currSize;
}

void IntArrayList::removeAt(int index)
{
    // error check
    if (index >= currSize or index < 0)
    {
        cerr << "invalid index" << endl;
        return;
    }
    
    int newSize = currSize - 1;

    // iterate over elements after index and move
    for (int i = index; i < currSize; ++i)
    {
        data[i] = data[i + 1];
    }
    data[currSize - 1] = NAN;
    currSize = newSize;
    return;
}

void IntArrayList::removeFirstOccurrence(ElemType elt)
{
    // linear search arraylist for first occurrence of the value
    // call removeAt to remove the element and return
}

ElemType IntArrayList::elementAt(int index)
{
    if (index >= currSize)
    {
        cerr << "invalid index" << endl;
        return 0;
    }
    return data[index];
}

void IntArrayList::doubleCapacity()
{
    int newCapacity = (capacity * 2) + 2;

    // allocate new array on heap
    ElemType *newArray = new ElemType[newCapacity];

    // copy data to new array
    for (int i = 0; i < currSize; ++i)
        newArray[i] = data[i];

    delete [] data;
    data = newArray;
    capacity = newCapacity;
}
