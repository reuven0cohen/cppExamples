#include<iostream>
using namespace std;

bool prime(int x);
bool primeSequence(int num);

void main()
{
	int number;
	cout<<"please enter a sequence ";
	cin>>number;
	if(primeSequence(number))
		cout<<"A prime numbers sequence";
	else 	 
		cout<<"Not a prime numbers sequence";
}

bool prime(int x)
{
	switch(x)
	{
		case 1:
		case 2:
		case 3:
		case 5:
		case 7:return true;
		default: return false;
	}
}

bool primeSequence(int num)
{
	int digit;
	if (num<10) return prime(num);
	else	
	{
		digit=num%10;
		if(prime(digit))
			return primeSequence(num/10);
		else
			return false;
	}
}
