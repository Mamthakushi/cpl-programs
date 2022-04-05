#include <stdio.h>
int main()
{
  int btod(int);
  int binary,decimal;
  printf("enter the binary number :");
  scanf("%d",&binary);
  decimal = btod(binary);
  printf("the decimal equivalent valve is=%d",decimal);
  return 0;
  
}
int btod(int bin)
{
  if(bin==0)
  {
    return 0;
  }
  else
  {
    return bin%10+btod(bin/10)*2;
  }
}

