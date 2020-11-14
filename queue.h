//queue.h
/*
Michael Alberda
10/21/2019
cs121
Bruce Bolden
*/

#ifndef QUEUE_H
#define QUEUE_H
#include "list.h"			//linked list and draw from file
                                        //struct for maze linked list


 
class Queue
{
	private:
		
	LinkedList Q;

	public:
		Queue();
		~Queue();
		
				
		void displaylist();
		
		void insert(int t, string n, int a);
		bool isempty();
		int howmany();
		void pop();
		
		void endturn(int t, int j);
		void print();
		void printqueue(int num);

};
#endif



