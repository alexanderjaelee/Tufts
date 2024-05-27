#ifndef INTARRAYLIST_H
#define INTARRAYLIST_H

typedef int ElemType;

class IntArrayList
{
public:
        IntArrayList();
        ~IntArrayList();
        /* A couple more things later */

        int size();

        void addAtBack(ElemType elt);
        void addAtFront(ElemType elt);
        void addAt(ElemType elt, int index);
        void removeAt(int index);
        void removeFirstOccurrence(ElemType elt); // ?? return success?
        int indexOf(ElemType elt);
        ElemType elementAt(int index);

private:
        /* Not done yet */
};

#endif
