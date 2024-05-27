#ifndef INTARRAYLIST_H
#define INTARRAYLIST_H

typedef int ElemType;

class IntArrayList
{
public:
        IntArrayList();
        IntArrayList(int initialSize, ElemType initialValues[]);
        ~IntArrayList();
        /* A couple more things later */

        // Getter and Setter
        int size();

        void addAtBack(ElemType elt);
        void addAtFront(ElemType elt);
        void addAt(ElemType elt, int index);
        void removeAt(int index);
        void removeFirstOccurrence(ElemType elt); // ?? return success?
        int indexOf(ElemType elt);
        ElemType elementAt(int index);

private:
        void doubleCapacity();
        int currSize, capacity;
        ElemType *data;
};

#endif
