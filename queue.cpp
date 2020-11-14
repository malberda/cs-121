//queue.cpp
#include "queue.h"

#include <string>
using namespace std;


Queue::Queue()
{
	//default constructor    
}

Queue::~Queue()
{
    //  destructor
}

void Queue::displaylist()
{cout<<moviename<<endl<<movieyear<<endl;
Q.printlist();}


void Queue::insert(int t, string n, int a)
{Q.addnode(t,n,a);}

int Queue::howmany()
{
return Q.totalnum();
}

void Queue::pop()
{
Q.deletenodefront();
}


bool Queue::isempty()
{
return Q.totalnum();
}

void Queue::endturn(int i, int j)
{
Q.endturnL(i,j);
}

void Queue::print()
{
Q.printlist();
}

void Queue::printqueue(int num)
{
bool empt=Q.totalnum();
if(empt==1){
int i=Q.totalnum();
Q.printqueueL(num, i);
}
}



