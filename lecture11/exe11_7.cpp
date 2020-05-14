#include<iostream>
using namespace std;

void init(char *name[]);
void print(char *name[]);
void free(char *name[]);


int main()
{
	char *name[5];	
	cout<< “Enter 5 names pls: " <<endl;
	init(name);
	print(name);
	free(name);
       cout<<endl<<name[2];
	getchar();getchar();
	return 0;
}

void init(char *name[])
{
	for (int i=0; i<5;i++)
	{
		name [i]= new char [20];
		cin.getline(name[i], 20);
	}
}
void print(char *name[])
{
	for (int i=0; i<5;i++)
		cout<<name[i]<<endl;
}

void free(char *name[])
{
	for (int i=0; i<5;i++)
		{delete [] name[i];
	          name[i]=NULL;}
}
