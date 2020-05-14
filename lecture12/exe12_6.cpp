#include<iostream> 
using namespace std;

struct node
{
  int x;
  node *next;
};

int main()
{
  node *head;  
  head= new node; 
  head->x=5; 
  head->next=NULL; 
  
  cout<<head->x;
  getchar();
  return 0;
} 
