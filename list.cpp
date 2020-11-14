//list.cpp
//list.cpp
#include <string>
#include <iostream>
#include <fstream>
#include "list.h"

using namespace std;


void LinkedList::createlist(int j, int &currpos)
{
string str;
ifstream fin("list.txt");
ifstream infile;
infile.open("list.txt");
  do
    {
	getline(fin, str)
  	  ifstream getline(fin, str);
    	  addnode(str);
	  currpos++;
			
    }while(str!="")



}

void LinkedList::printlist()
{


}
int LinkedList::totalnum()
{


}

void LinkedList::addnode(string n)
{nodeptr ptr = new node;
ptr->name=n;
end->next=ptr;
end=ptr;
}





