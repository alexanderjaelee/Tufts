all: IntArrayListTest

IntArrayListTest: 	IntArrayListTest.o IntArrayList.o
			      	g++ -o IntArrayListTest IntarrayListTest.o IntArrayList.o

IntArrayListTest.o: IntArrayListTest.cpp
					g++ -c IntArrayListTest.cpp
IntArrayList.o:		IntArrayList.cpp IntArrayList.h
					g++ -c IntArrayList.cpp