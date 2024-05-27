#include <iostream>
#include "IntArrayList.h"

using namespace std;

int main()
{
    IntArrayList al1;

    cout << "initial size: " << al1.size() << endl;
    al1.addAtBack(-12);
    cout << "size should be 1: " << al1.size() << endl
         << "element should be -12: " << al1.elementAt(0)
         << endl;
    ElemType initialValues[] = {2, 3};
    IntArrayList al2(2, initialValues);
    cout << "al2 size should be 2: " << al2.size() << endl
         << "al2 element 1 should be 2: " << al2.elementAt(0) << endl
         << "al2 element 2 should be 3: " << al2.elementAt(1)
        << endl;
    return 0;
}