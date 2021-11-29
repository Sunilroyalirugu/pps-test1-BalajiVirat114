#include<stdio.h>
int add(int num1,int num2)
{
  return(num1+num2);
}
int main()
{
  int num1,num2,result;
  printf("Enter the two numbers:");
  scanf("%d%d",&num1,&num2);
  result =add(num1,num2);
  printf("%d+%d is %d",num1,num2,result);
  return 0;
  }
