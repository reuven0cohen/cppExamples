#include<iostream> 
using namespace std;

void draw_line(char c=‘_’, int n=10);

int main ()
{ 	draw_line();
	draw_line('a');
	draw_line('x',22);
	return 0;
}


void draw_line(char c, int n) //  draws a line with char c of length n
{  
	for (int i=0; i<n; i++)
	     cout << c;
	cout << endl;
}
