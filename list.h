//list.h

//list.h
#ifndef LIST_H
#define LIST_H
#include <string>

using namespace std;
 
class LinkedList
{
private:
	struct node
	{
	string name;
	struct node *next;
	};
	typedef node *nodeptr;
	nodeptr start;
	nodeptr end;
public:
//constructor
LinkedList()
{
start=NULL;
end=start;
}
//destructor
~LinkedList()
{
nodeptr p=start,n;

  while(p!=NULL)
	{n=p;
	p=p->next;
	delete n;}
}

//linkedlist functions
void createlist(int j, int &currpos);
void addnode( string n);
void printlist();
int totalnum();


};



#endif






