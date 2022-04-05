#include <stdio.h>
#include <math.h>

int main()
{
  float a,b,c,r1,r2,disc,real_part,imag_part;
  printf("enter the coefficients of quadratic equation");
  scanf("%f%f%f",&a,&b,&c);
  if(a==0)
  {
    printf("the equation is linear");
    return 1;
  }
  else
  {
    disc=(b*b)-4*a*c;
    if (disc==0)
    {
      printf("Real and equal roots\n");
      r1=r2=-b*(2*a);
      printf("the roots are r1=%f & r2=%f\n",r1,r2);
    }

  }
   if(disc>0)
  {
    printf("Real and distinct roots\n");
    r1=(-b+sqrt(disc)/(2*a));
    r2=(-b-sqrt(disc))/(2*a);
    printf("the roots are r1=%f and r2=%f\n",r1,r2);
  }
  else
  {
    printf("imaginary roots\n");
    real_part=-b/(2*a);
    imag_part=sqrt(-disc)/(2*a);
    printf("the roots are \n");
    printf("r1=%f+1%f\n",real_part,imag_part);
    printf("r2=%f-1%f\n",real_part,imag_part);
  }
}
