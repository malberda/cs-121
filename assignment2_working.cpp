/*
Michael Alberda
9/20/2019
assignment2.cpp
cs121
Bruce Bolden
*/
  #include<iostream>
  #include<string>
  #include<cstdlib>
  #include<stack>
  #include<fstream>
  #include<sstream>
//#include <bits/stdc++.h>
  using namespace std;

					//global variables
int width, height;
int startlocation;
bool solved=0;
int counter=1;

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

						//linked list and draw from file
                                        //struct for maze linked list
struct node
{
char info;
int number;
bool visited;
struct node *next;
};
typedef struct node Node;
                                        //maze class
class maze
{

 private:
          node *head, *tail;

        public:
          maze()
          {
                head=NULL;
                tail=NULL;
          }                                     //add node to maze linked list






  void add_node(char c, int i)
    {
        node *tmp=new node;
        tmp->info=c;
        tmp->number=i;
        tmp->visited=0;
        if(c!='.')
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
    }
                                        //print maze(width, height)
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

    }                                           //find start position for maze
  void findstart()
    {bool isgoal=0;
  //go through each node after they are defined in order to find one with S
        node *curr =new node;
        curr=head;
          for(int i=0;i<height;i++){
                for(int j=0;j<width;j++){
		  if(curr->info=='G')
		    {cout<<"this maze is possible"<<endl; isgoal=1;}

                        if(curr->info=='S')
                          startlocation=(i*width+j);
                        curr=curr->next;
                        }
             }
if(isgoal==0)
{cout<<"this maze is not possible"<<endl; solved=1;}

}

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

                }                                        //turn first two strings of numbers into the width and
                                        		//height, using stringstream
        stringstream geek(strw);
        geek>>width;
        stringstream geek2(strh);
        geek2>>height;
}
                                        //end create list
                                        //check what is inside of the maze at current point
                                        //custom ouptut for each type of input
void check(int i)
  {
if(counter!=1)
pop();

counter++;

node*nodecheck = head;
	if(i>=0 and i<width*height)
	{for(int j=0;j<(i);j++)
	  {nodecheck=nodecheck->next;// cout<<j<<endl;
	  }
if(nodecheck->visited==0)                  //if visited ignore all future code and just pop()
{
if(nodecheck->info=='G')		//be done
  {cout<<"solved "<<endl;  solved=1;}
if(nodecheck->info=='V')		//do nothing here but pop(), 'V' is just visited
  {}
if(nodecheck->info=='#')		//do nothing but pop()
  {}
if(nodecheck->info=='.' or nodecheck->info=='S')	//if s or ., push nearby spots
  {
	if(i%width<(width-1))		//if one away from right side, add i+1
	  {push(i+1);}
	if(i%width>0)			//if one away from left side, add i-1
          {push(i-1);}
	if(i<(width*height-width))	//if not on bottom row, add i+width
          {push(i+width);}
	if(i>(width-1))			//if not on top row, add i-width to push
          {push(i-width);}
					//changed to visited 'V'
nodecheck->info='V';
  }
}
					//see how many attempts
cout<<"attempt number: "<<counter<<endl;
					//set to visited
nodecheck->visited=1;	

	}
  }
};










int main(){

maze maze1;
maze1.create_list();
cout<<width<<height<<endl;
maze1.print_maze(width,height);
maze1.findstart();
push(startlocation);
while(solved!=1){
maze1.check(peek());
maze1.print_maze(width,height);
if(isempty()==true)
{cout<<"impossible maze"<<endl;
break;}
}
}
