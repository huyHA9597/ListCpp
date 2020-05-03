#ifndef ORDEREDARRAYLISTTYPE_H
#define ORDEREDARRAYLISTTYPE_H

#include <iostream>
#include "arrayListType.h"

using namespace std;

class orderedArrayListType: public arrayListType
{
public:
    void insertAt(int location, int insertItem);
    void insertEnd(int insertItem);
    void replaceAt(int location, int repItem);
    int seqSearch(int searchItem) const;
    void insert(int insertItem);
    void remove(int removeItem);

    orderedArrayListType(int size = 100);
    // Constructor
};

#endif