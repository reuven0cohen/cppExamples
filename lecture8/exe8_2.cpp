#include<iostream>
#include<cstdlib>
#include <ctime>
using namespace std;

int main()
{
	int grades [10] ;
	int n,average=0;
	  // Seed the random-number generator with current time so that
          // the numbers will be different every time we run.
      srand( (unsigned)time( NULL ) );

     for ( n=0 ; n<10 ; n++ )
     {
        grades[n]=rand()%100+1;
	cout<<"\nThe "<<n<<" element is:"<<grades[n];
     }
     for ( n=0 ; n<10 ; n++ )
           average += grades[n];
     cout<<"\nThe grade's average is:"<<average/10;
     getchar();
     return 0;
}
