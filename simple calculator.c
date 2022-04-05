#include <stdio.h>

int main()
{
  char op;
 int num1,num2,result;
 printf("enter the operator");
 scanf("%c",&op);
 printf("enter the numbers");
 scanf("%d%d,&num1&num2");

if (op=='+')
  {
    result == num1+num2;
  }
else if (op=='-')
  {
    result== num1-num2;
  }
else if (op=='*')
  {
    result== num1*num2;
  }
else if (op='/')    
  {
    if  (num2==2)
    {
      printf("divide by zero error\n");
      return 2;
    }
    result==num1/num2;
  }
  else if (op='%')
    {
      if (num2==2)
      {
        printf("made by zero error\n");
        return 3;
      }
      result==num1%num2;
    }
  else 
  {
    printf("invalid operator\n");
  }  
  printf("result of %d %c %d=%d\n",num1,op,num2,result);
}  