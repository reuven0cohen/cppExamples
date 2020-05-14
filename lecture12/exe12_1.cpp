#include<iostream> 
using namespace std;

struct Point 
{
    int x;
    int y;
};

int main() 
{
	Point* p; 
	p = new Point; 
	p->x = 12;  
	p->y = 34;
	cout << p->x << "\t" << p->y << endl;
	getchar();
	return 0;
}
