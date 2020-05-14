#include <iostream>

int main()
{
   int num1; /* first number to be read from user  */
   int num2; /* second number to be read from user */
   std::cout << "Enter two integers\nand the program will show the relationships they hold: ";
   std::cin >> num1 >> num2;   // read two integers
   
   if ( num1 == num2 ) 
	   std::cout << num1 << " is equal to " << num2 << std::endl;
   if ( num1 != num2 ) 
	   std::cout << num1 << " is not equal to " << num2 << std::endl;
   if ( num1 < num2 ) 
	 std::cout << num1 << " is less than " << num2 << std::endl;
   if ( num1 > num2 ) 
 	std::cout << num1 << " is greater than " << num2 << std::endl;
   if ( num1 <= num2 )
	 std::cout << num1 << " is less than or equal to " << num2 << std:: endl; 
   if ( num1 >= num2 ) 
	 std::cout << num1 << " is greater than or equal to " << num2 << std::endl; 

   return 0; /* indicate that program ended successfully */
} /* end function main */
