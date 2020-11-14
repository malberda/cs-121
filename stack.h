//stack.h
/*
Michael Alberda
9/20/2019
cs121
Bruce Bolden
*/
#include "common.h"

					//stack
					//dynamically allocated
struct stacknode{
int data;
struct stacknode *link;
};

struct stacknode *top;
					//push
void push(int n)
{
struct stacknode* temp;
temp=new stacknode();

if(!temp)
  {
        cout<<"heap overflow"<<endl;
  }
        temp->data=n;
        temp->link=top;
        top=temp;
}
                                        //isempty
bool isempty()
{return top==NULL;}
                                        //peek
int peek()
  {
        if(!isempty())
                {return top->data;
		cout<<top->data<<"top data"<<endl;}
        else{
	exit(1);}

  }
                                        //pop
void pop()
  {
        struct stacknode* temp;

        if(top==NULL){
        cout<<"stack underflow"<<endl;
        }

        else{
        temp=top;
        top=top->link;
        temp->link=NULL;
        delete temp;
        }
  }
