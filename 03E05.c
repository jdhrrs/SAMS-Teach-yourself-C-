/* 03E05.c: One way to calculate 3 multiplied by 5 and print on screen */
#include<stdio.h>

int integer_multiply(int x, int y )
{
int result;
result = x * y;
return result; 
}
int main()
{ 
int sum;

sum= integer_multiply(3,5);
printf("The multiplication of 3 and 5 is %d", sum);
}

