#include<iostream> 
using namespace std;

void draw_line();
void draw_line( char c);
void draw_line(char c, int n);

int main ()
{ 	draw_line();
	draw_line('a');
	draw_line('x',22);
	return 0;
}

void draw_line() //draws a line with char ’_’ of length 10
{
 for (int i=0; i<10; i++)
	     cout << "_";
   cout << endl;
}

void draw_line( char c) //draws a line with char c of length 10
{  
 for (int i=0; i<10; i++)
     	cout << c;
   cout << endl;
}

void draw_line(char c, int n) //  draws a line with char c of length n
{  for (int i=0; i<n; i++)
	     cout << c;
   cout << endl;
}
