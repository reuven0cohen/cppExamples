..
void print(char *name[]);
int main()
{
	char *name[5];	
	cout<< “Enter 5 names pls: " <<endl;
	init(name);
	print(name);
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
