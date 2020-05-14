void printAverage( object *head )
{	float avr=averageList(head);
     element *current = head;
	while( current != NULL )
	{	if( current->price>avr)   cout<< current->name;
		current = current->next;
	}
 }
 
float averageList (object *head )
{  float sum=0.0;
   int count=0;
  element *current = head;
  while( current != NULL )
	{	sum+= current->price;
		count++;
		current = current->next; 	}
 return sum/count;
}
