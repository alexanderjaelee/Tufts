/*
 * This program has bugs.
 *
 * 1.  It has two memory leaks
 * 2.  It has an out of bounds array access
 *
 * A memory leak occurs when a program allocates memory on the heap,
 * using new, but never recycles the memory with delete.
 * The program will work (unless there isn't enough memory), but it
 * is poor engineering, because large, long-running programs with
 * leaks will run out of memory when they shouldn't have to.
 *
 * In Comp 15, your programs should not leak memory.
 *
 * An out of bounds array access or following a bad pointer address is
 * an error.  The system may or may not detect such errors.  In fact,
 * often there may be no obvious indication of an error.  Thus, you
 * must be careful as a programmer to avoid such situations.
 *
 * The "valgrind" program can be used to help discover both memory
 * leaks and memory errors.
 *
 * You can run valgrind on this program by compiling it and then
 * running:
 *      valgrind ./leak
 * and valgrind will run the program, monitor all its memory accesses,
 * and keep track of memory allocations and deallocations to detect
 * leaks. 
 */

#include <iostream>

using namespace std; 

int main()
{
        int *aux;
        int size, index;

        cout << "Size of the array:  ";
        cin  >> size;
        aux = new int[size];

        cout << "Again, size of the array:  ";
        cin  >> size;
        aux = new int[size];

        cout << "Let's make an error: reading out of bounds" << endl;
        cout << "Give an out of bounds index:  ";
        cin  >> index;
        cout << aux[index] << endl;

        return 0;
} 
