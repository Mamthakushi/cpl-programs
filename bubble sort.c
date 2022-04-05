
#include <stdio.h>
#define MAX 20
int main() 
{
  int a[MAX];
  int n,i,j,temp;
  printf("ENTER THE SIZE : ");
  scanf("%d",&n);
  printf("ENTER %d integers : ",n);
  for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
  printf(" M SORTED ARRAY \n");
  for(i=0;i<n-1;i++)
    {
      for(j=0;j<n-(1+i);j++)
        {
          if(a[j] > a[i+j])
          {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
            }
        }
    }
  printf("SORTED ELEMENTS ARE : \n");
  for (i=0;i<n;i++)
    {
      printf("%d\t",a[i]);
    }
  return 0;
}
