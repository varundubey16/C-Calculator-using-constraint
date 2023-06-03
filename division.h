#include <stdio.h>  
  
void division()

{  

int A, B, division;

printf("Enter the Number you want to Divide: ");
    
scanf("%d",&A);

printf("Enter the Number you want to Divide it from: ");

scanf("%d",&B);

int quo;  

quo=0;

while (A >= B)

{

A= A + (-B);

quo++;

}

// r is the remainder of our Division program

int r;

r=A;

// using while loop 

int loop;

for(loop=1;loop<100000;loop++)

{

r = r + A;

}

int quo1;

quo1=0;

while (r >=B)

{

r=r+(-B);

}

// Computer uses + operator to perform Division & shows Output

printf("Quotient is %d",quo,quo1);

}

// VARUN DUBEY PRN - 22030121242 Scratch Code for Calculator Program in C language