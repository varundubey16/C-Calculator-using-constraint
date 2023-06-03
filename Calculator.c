#include <stdio.h>

#include "header.h"

void main()

{

float A, B;

// Operator is a symbol that tells compiler to perform specific mathematical functions. Here we have done all +,-,*,/ using the + operator , in maths it is a Plus (Addition) Operator

int operator;

// Program prompts to ask which task user wants to perform in calculator program with serial number

printf("For Addition Enter 1\n");

printf("For Subtraction Enter 2\n");

printf("For Multiplication Enter 3\n");

printf("For Division Enter 4\n");

printf("Choose operator's serial sumber (Between 1 to 4):-\n");

scanf("%d", &operator);

// Compiler will run code of header files accordance to operator selected (add,sub,mul,div)

if (operator== 1)

{

    addition();

}

else if (operator==2)

{

    subtraction();

}

else if (operator==3)

{

    multiplication();

}

else if (operator==4)

{

    division();

}

}



