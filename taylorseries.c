#include<stdio.h>
#define PI 3.145
void main()
{
  float x,degree,num,denum,sum,term,n;
  int I;
  printf("ENTER THE DEGREE: ");
  scanf("%f",&degree);
  x=degree*(PI/180.0);
  sum=0;
  num=x;
  denum=1.0;
  I=1;
  do
  {
    term=num/denum;
    sum=sum+term;
    I = I+2;
    num=-num*x*x;
    denum=I*(I-1)*denum;
  }
  while(fabs(term)>=0.00001);
  printf("THE COMPUTER VALUE OF sin(%.2f)=%.2f\n",degree,sum);
  }