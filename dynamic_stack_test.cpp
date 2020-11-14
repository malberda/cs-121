#include <iostream>
using namespace std;

struct stacknode{
int data;
struct stacknode *link;
};

struct stacknode *top;

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

bool isempty()
{return top==NULL;}

int peek()
  {
	if(!isempty())
		return top->data;
	else{}

  }

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

int main()
{
push(11);
push(22);
cout<<"top is"<<peek();

pop();
cout<<"top is"<<peek();
pop();
cout<<"top is"<<peek();
return 0;
}
