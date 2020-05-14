#include<iostream> 
using namespace std;
struct node
{
  int x;
  node *next;
};

void print(node *head);
void freememory(node *head);
void addEnd(node *head);

int main()
{
	node *head=NULL;
	node *tmp;  
	for(int i=1;i<10;i++)
	{
		tmp=new node; 
		tmp->x=i;
		tmp->next=head;//adding a new member 
		head = tmp;//move head
	}
	print(head);
	addEnd(head);
	freememory(head);
	print(head);
	return 0;
}
void freememory(node *head)
{	
	node *tmp;
	while(head!=NULL)
	{ 
		tmp=head;
		head=head->next;
		delete tmp;
		}
}
