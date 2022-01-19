#include<stdio.h>
int main()
{
  int Number , i , sum = 0;

  printf("\n Please enter any Integer value\n");
  scanf("%d",&Number);
  for(i = 1; i<= Number;i++)
  {
       sum =sum + i;
 }
 printf("sum of natural Numbers =%d", sum);
 return 0; 
}