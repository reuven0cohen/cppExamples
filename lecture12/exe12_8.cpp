#include<iostream> 
using namespace std;

struct node
{
  int x;
  node *next;
};

void add(node *head);
void print(node *head);

int main()
{
  node *head;  
  head= new node; 
  head->x=5; 
  head->next=NULL; 
  add(head);
  print(head);
  getchar();
  return 0;
} 
void add(node *head)
{
  node *tmp;  
  tmp=new node; 
  cout<<"Enter a next item ";
  cin>>tmp->x;
  tmp->next=NULL; 

  head->next=tmp; //adding a new member
}
void print(node *head)
{
  node *tmp;  
  tmp=head; 
  cout<<" \n Printing list ";
  while(tmp!=NULL)
       { cout<<tmp->x<<" "; 
         tmp=tmp->next;}
}
