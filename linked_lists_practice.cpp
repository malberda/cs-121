/*
Michael Alberda
//2019
linkedlists practice
cs121
Bruce Bolden
*/
#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
using namespace std;



				//struct
struct node
{
  int data;
  char letter;
  struct node *next;
};

				//classes
class linked_list
{
	private:
	  node *head,*tail;
	
	public:
	  linked_list()
	  {
	    head=NULL;
	    tail=NULL;
	  }
  void add_node(int n)
    {
	node *tmp =new node;
	tmp->data=n;
	tmp->next=NULL;

	if(head==NULL)
	  {
		head = tmp;
		tail = tmp;
	  }
	else
	  {
		tail->next = tmp;
		tail = tail->next;
	  }
    }
  void print_list()
    {
	node *curr=new node;
	curr=head;
	while(curr!=NULL)
	{
	  cout<<curr->data<<endl;
	  curr=curr->next;
	}		//unfinished
    }
				
};

				//define functions



				//int main

int main(){

				//main variables
char answer;
int input;


linked_list first_list;




        cout<<"would you like to add a node? (y/n)"<<endl;
        cin>>answer;


do{

  cout<<"what would you like to add to the list?"<<endl;
  cin>>input;

   
  cout<<"would you like to add another node?"<<endl;
  cin>>answer;

  first_list.add_node(input);
  first_list.print_list();


}while(answer!='n');





return 0;

}





//end
