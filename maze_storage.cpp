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


							//struct



struct node
{
char info;
int number;
bool visited;
struct node *next;
};
typedef struct node Node;

							//classes
							//linked list maze
class maze
{
	private:
	  node *head, *tail;
 
	public:
	  maze()
	  {
		head=NULL;
		tail=NULL;
	  }					//add node
  void add_node(char c, int i)
    {
	node *tmp=new node;
	tmp->info=c;
	tmp->number=i;
	tmp->visited=0;
	if(c!='.')
	tmp->visited=1;
	tmp->next=NULL;
		
	if(head==NULL)
	  {
		head=tmp;
		tail=tmp;
	  }
	else
	  {
		tail->next=tmp;
		tail=tail->next;
	  }
    }						//delete node
  void delete_node_begin()
    {
	node* temp=new node();
	head=head->next;
	delete temp;
    }   					//print
  void print_maze(int w, int h)
    {
	node *curr=new node;
	curr=head;
	  for (int j=0;j<h;j++)
	  {
	    for (int i=0;i<w;i++)
	    {
		cout<<curr->info;
		curr=curr->next;
	    }cout<<endl;
	  }
	cout<<endl;

    }						//find start position
  void findstart()
    {
  //unfinished
  //go through each node after they are defined in order to find one with S
        node *curr =new node;
	curr=head;
	  for(int i=0;i<height;i++){
                for(int j=0;j<width;j++){
			if(curr->info=='S')
			  startlocation=(i*width+j);
			curr=curr->next;
                        }
             }
	cout<<"startlocation"<<startlocation<<endl;
    }								//end findstart
						//insert maze.txt into a linked list
  void create_list()
{
	ifstream fin("maze.txt");
        char character;int widheight; int filelength=0; int widheightlength; int counter;
	string strw; string strh;
	while(fin>>character){++filelength;}
        ifstream infile;
        infile.open("maze.txt");


        for(int i=0;i<filelength;i++)
		{
		if(i==0)
		{infile>>strw;
		}
		else if (i==1)
		{infile>>strh;
                }
		else
                {infile>>character;
		add_node(character, i);}
		
                }
	stringstream geek(strw);
	geek>>width;
	stringstream geek2(strh);
	geek2>>height;
}					//end create list





					//solve by stacks
bool solve()
{
int minusw; int plusw; int minush; int plush;

	
  while(solved!=1)
    {
//	check(stack1.a[top]);
    }

}
					//end solve
					//check function, checks if a spot has been
					//visited and if not, what is in it
bool check(int i)
{
Node* tmp=new Node();




  if (i>=0 and i<(width*height))
  {
	for(int j=0;j<i;j++)
	  {
		tmp=tmp->next;
	  }




  }
  else
  cout<<"error"<<endl;

}

};//struct

                                                //stacks

class Stack {

int top;

public:
int a[1600];
Stack(){top=-1;}
bool push(int n);
int pop();
bool isempty();
};

bool Stack::push(int n)
{
  if (top>=(1599))
    {
        cout<<"stackoverflow"<<endl;;
        return false;
    }
  else
    {
        a[++top]=n;
        cout<<n<<"pushed"<<endl;                //remove this later
        return true;
    }
}

int Stack::pop()
{
  if(top<0)
    {
        cout<<"stack underflow"<<endl;
        return 0;
    }
  else{
        int x=a[top--];
        return x;
      }

}









						//int main

int main(){

maze maze1;
class Stack stack1;
maze1.create_list();
cout<<width<<height<<endl;
maze1.print_maze(width,height);
maze1.findstart();
maze1.solve();
if(solved==0)
cout<<"something went wrong"<<endl;

stack1.a[top]=1;




return 0;
}



						//define functions


void addtostack (int n)
{
if(n>=width)
    stack1.push(n-width);
  if(n%(width)>0)
    stack1.push(n-1);
  if(n%(width)<(width-1))
    stack1.push(n+1);
  if(n<((width*height)-(1+width)))
    stack1.push(n+width);



}

