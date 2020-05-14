#include<cstring>
#include<iostream> 
using namespace std;

int main( )
{
    char *s = "The quick brown dog jumps over the lazy fox";
	char *pdest;
     int result;

	pdest = strchr( s, 'b' );
     result = (int)(pdest - s + 1);

     if ( pdest != NULL )
      cout<< "Result:   first 'b' found at position "<< result << endl;
    getchar();return 0;
}
