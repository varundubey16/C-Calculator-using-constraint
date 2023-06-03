#include <stdio.h>

void multiplication()

{

int A,B;

int multiply,loop;

// User to input 1st Number he wants to Multiply

printf("Enter the 1st Number you want to Multiply: ");
    
scanf("%d",&A);

// User to input 2st Number he wants to Multiply

printf("Enter the 2nd Number you want to Multiply it with: ");

scanf("%d",&B);

multiply=0;

  for(loop=1;loop<=B;loop++){
        
		multiply += A;
    
	// Multiplication of both numbers done using + operator
      
  }
    

// Computer uses + operator to perform Multiplication & shows Output

printf("\nMultiplication of %d and %d is: %d\n",A,B,multiply);

}
// VARUN DUBEY PRN - 22030121242 Scratch Code for Calculator Program in C language