#include<iostream>
using namespace std;

int main()
{
  int numbers[4];
  int *p;
 
  p = numbers;  *p = 10;
  p = &numbers[1];  *p = 20;
  p = numbers + 2;  *p = 30;
  p = numbers;  *(p+3) = 40;

  for (int n=0; n<4; n++)
    cout << numbers[n] << ", ";

  return 0;
}
