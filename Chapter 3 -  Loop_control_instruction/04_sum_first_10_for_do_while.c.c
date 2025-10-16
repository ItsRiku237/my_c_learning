#include <stdio.h>

int main()
{
  // Write a program to implement program 5 using ‘for’ and ‘do-while’ loop.
  int i, sum = 0;
  for (i = 1; i < 11; i++)
  {
    sum += i;
  }
  printf("The sum first ten natural numbers: %d", sum);

  return 0;
}