#include <stdio.h>

void subtraction()

{

int A, B, subtraction;

// User to input the Number he wants to Subtract

printf(" Enter the Number you want to Subtract: ");

scanf("%d" ,&A);

// User to put second Number that he wants to Subtract the first number from from

printf(" Enter the Number you want to Subtract from it: ");

scanf("%d",&B);

// Subtraction of both numbers done by using + operator by using logic that in Maths , 4+2 will be 6 , but 4+(-2) will be 2 as Maths rule says (+) (+) = (+) but (+) (-) = (-). Taught in class 6,7,8 & used in 9-12....

subtraction = A + (-B);

// Computer uses + operator to perform Subtraction & shows Output

printf("\nSubtraction of %d and %d is = %d\n",A,B, subtraction);

}
// VARUN DUBEY PRN - 22030121242 Scratch Code for Calculator Program in C language