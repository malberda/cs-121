/*
Michael Alberda
//2019
assignment
cs121
Bruce Bolden
*/
  #include<iostream>
  #include<string>
  #include<cstdlib>
  #include<stack>
  #include<fstream>
  #include<sstream>
#include <bits/stdc++.h>
  using namespace std;

					//global variables
int locationx, locationy;
int width, height;
int top; int startlocation;
bool solved=0;


					//stack

class Stack{

public:
  int a[1600];
  
  Stack()[top=(-1)];}
  bool push(int n);
  void pop();
  int peek();
  bool isempty;
};

bool Stack::push(int n)
{ 
  if(top>=(1600-1)){
	cout<<"stack overflow"<<endl;
	return false;
	}
  else{
	a[++top]=x;
	return true;
  }
}

int Stack::pop()
{if(top<0)
cout<<"stack empty"<<endl;
else
{top--;}

int Stack::peek()
{
if (top<0)
cout<<"stack is empty"<<endl;
else
{
int x=a[top];
return x;
}
}
bool Stack::isempty()
{return(top<0);}

						//linked list and draw from file

struct node
{
char info;
int number;
bool visited;
struct node *next;
};
typedef struct node Node;


class maze
{


};










int main(){
class Stack stack1;









}
