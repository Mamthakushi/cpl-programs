#include <stdio.h>

int main()
{
  int a[10];
  int temp;
  int key,first,last,mid,n,i,j;
  printf("enter the number of elements : ");
  scanf("%d",&n);
  printf("\n enter the array element ");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for (i=0;i<n-1;i++)
  {
    for(j=0;j<n-1;j++)
    {
      if(a[j]>a[j+1])
      {
        temp= a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
      }
    }
  }
printf("\n enter the sorted array is : ");
for(i=0;i<n;i++)
{
  printf("%d\n",a[i]);
}


printf("\nenter the key element");
  scanf("%d",&key);
  first = 0; last = n-1;
  while(first<=last)
  {
    mid = (first + last)/2;
    if(key == a[mid])
    {
      printf("found the element in pos %d",mid + 1);
      return 0;
    }
    else if(key > a[mid])
    {
      first = mid +1;
    }
    else
    {
      last = mid -1;
    }
  }
    printf("\nthe element %d is not found in the array",key);
    return 0;
    
    
    

    


  
}