#include<stdio.h>
int main()
{
  int a[10][10],b[10][10],c[10][10];
  int m,n,p,q;
  int i,j,k;

  printf("enter the order of matrix A :");
  scanf("%d%d",&m,&n);
  printf("enter the order of matrix B ;");
  scanf("%d%d",&p,&q);

  if(n!=p)
  {
    printf("number of columns of matrix a is not equal to number of rows of matrix b");
    printf("\nthe matrix multiplication is not possible..\n");
    return(0);
    
  }
  printf("enter elements of a matrix A ;\n");
  for(i=0;i<m;i++)
    {
      for(j=0;j<n;j++)
        {
          scanf("%d",&a[i][j]);
        }
    }

    printf("\n the matrix A is---\n");
    for(i=0;i<m;i++)
      {
        for(j=0;j<n;j++)
          {
            printf("%d\t",a[i][j]);
          }
          printf("\n");
      }
   
    
  printf("enter  elements of matrix B\n ");
  for(i=0;i<p;i++)
    {
    for(j=0;j<q;j++)
      {
      scanf("%d",&b[i][j]);
      }
  
    }
    printf("the matrix B is--- \n");
    for(i=0;i<p;i++)
    {
    for(j=0;j<q;j++)
      {
      printf("%d\t",b[i][j]);
      }
      printf("\n");
    }
  
    for(i=0;i<m;i++)
      {
        for(j=0;j<q;j++)
          {
            c[i][j]=0;
            for(k=0;k<n;k++)
              {
                c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
              }
          }
      }
      printf("the resultant matrix is :\n");
    for(i=0;i<m;i++)
      {
        for(j=0;j<q;j++)
          {
            printf("%d\t",c[i][j]);
          }
          printf("\n");
      }
      return 0;
}
  
  
    
  
