#include<iostream> 
using namespace std;

struct Date {
       int year;
	int day;
	char month[10];    
};
struct Birthday {
      Date d;
	char name[20];   
};

void print(Birthday b);

int main()
{
Birthday  b;      
cout<<"Enter your name";
cin>>b.name;
cout<<"Enter your birthday date (day, month, year)";
cin>> b.d.day >> b.d.month >> b.d.year;
print(b);
getchar();    return 0;
}
void print(Birthday b)
{	
  cout<<"On "<< b.d.day;
  cout<<"  "<<b.d.month;
  cout<<" "<< b.name;
  cout<<" will be "<< 2007-b.d.year ;
  cout<<" years old";
}
