/*******************************
*
*  Project Name: Check the Mathematics
*  Description: Write 5 computational programs to print out the first 50 terms of Lazy Caterer's Sequence, Prime Numbers, Fibonacci Sequence, Collatz Time Stopping and Happy Numbers
*  File names: sequences.c
*  Date: 2/2/2018   
*  Authors: Muntabir Choudhury and Baizhong Jin
*
*******************************/

#include <stdio.h>
#include <stdbool.h>

int main()
{	
		//The following program will print out Lazy Caterer's Sequence
		printf("Lazy Caterer's Sequence:\n");
		int i;
		int pieceNumber = 1;

		//This for loop will print out first 50 terms of the sequence
		for( i = 1; i <= 50; i++ )
		{
			//Stores pieces into pieceNumber
			printf("%d ",pieceNumber);
			pieceNumber = pieceNumber + i;
		}
		printf("\n\n");

		//The following program will print out the first 50 Prime Numbers
		printf("Prime Numbers:\n");
		int primeNumber = 2;
		printf("%d ",primeNumber);
		int j = 0; //Declares for while loop
		int k;	//Declares for prime number checking
	
		//This while loop will print out prime numbers until it reaches to 49
		while( j < 49 )
		{
			_Bool isPrime = 1; 
			primeNumber++;
		
			//This for loop is checking whether or not the number is divisible. If the remainder is 0, then it's not prime
			for( k = 2; k < primeNumber; k++ )
			{
				if( primeNumber % k == 0 )
				{				
					//Makes the statement false. After modulus operation if remainder is equal to 0, then it won't execute the next block of code 				
					isPrime = 0;
				}
			}
			//Declared 'isPrime' at the begining as True. When the value is prime, it prints out the value.  
			if( isPrime )
			{
				printf("%d ",primeNumber);
				j++;
			}
		}
		printf("\n\n");
	
		//The following program will print out the first 50 Fibonacci Sequence
		printf("Fibonacci Sequence:\n");
		long a; //Declares for loop
		long b = 1;	// Stores the first value of fibonacci sequence
		long c = 1;	//Stores the second value of fibonacci sequence
		printf("%ld ",b);
		printf("%ld ",c);
		for( a = 0; a < 24; a++ )
		{	
			//Adding two previous digits and storing them into b and c
			c = c + b;
			b = b + c;
			printf("%ld ",c);
			printf("%ld ",b);
		}
		printf("\n\n");
	
		//The following program will print out first 50 terms of Collatz Stopping Time Sequence
		printf("Collatz Stopping Times:\n");
		int n; //Declares for loop
		int counter = 0; //Declares for printing out the Collatz Stopping time sequence
		int value = 0; //Declares for storing the value of n
	
		//This for loop will print out the first 50 terms	
		for( n = 1; n <= 50; n++ )
		{
			value = n;
		
			//This while loop will do the computation for even and odd number until the value reaches to 1
			while( value > 1 )
			{
				//The following if else statement is doing the computation for even and odd number 
				if( value % 2 == 0 )
				{
					value = value / 2;					
					counter++;
				}
				else
				{
					value = (value * 3) + 1;
					counter++;
				}
			}
			printf("%d ",counter);
			counter = 0;
		}
		printf("\n\n");

		//The following program will print out the first 50 Happy Number
		printf("Happy Numbers:\n");
		int l = 1; //Declares for while loop
		int sum = 0; //Declares for adding purpose
		int number = l; //Declares for storing the value of 'l'
	
		//This while loop will print out first 50 happy numbers
		while( l <= 320 )
		{		
			if( number == 0 )
			{		
					//Checking if the number is happy when it reaches to 1
					if( sum == 1 )
					{
						printf("%d ",l);
						l++;
						number = l;
					}
					//Checking if the number is unhappy when it reaches to 4
					else if( sum == 4 )
					{
						l++;
						number = l ;	
					}
					///Otherwise store the happy number
					else
					{
						number = sum;
					}
					sum = 0;	
			}
			//The following computation is doing the process of summing and squaring
			int digit = number % 10;
			sum += digit * digit;
			number = number / 10;
		}
		printf("\n");
		
		return 0;
}
