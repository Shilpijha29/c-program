#include <stdio.h>
int main()
{
  int number1, number2, sum;
 
  printf(" Enter two integer values \n ");
  scanf("%d %d", &number1, &number2);
  
  sum = number1 + number2;
 
  printf(" Sum of the two integer values is %d", sum);
  return 0;
}