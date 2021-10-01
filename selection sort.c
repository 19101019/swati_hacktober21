#include<stdio.h>
int main()
{
    int a[100],n,i;
    printf("\n Enter no. of elements : ");
    scanf("%d",&n);
    printf("\n Enter array : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",a[i]);
    }
    //selection sort code.
    int j,temp,min,add;
    for(i=0;i<=n-2;i++)
    {
      min=a[i];
      add=i;
      for(j=i+1;j<=n-1;j++)
      {
          if(min>a[j])      // sort in ascending order
          {
              min=a[j];
              add=j;
          }
      }
      //swap min and a[i].
      temp=a[i];
      a[i]=a[add];
      a[add]=temp;
    }
    printf("\n Your sorted array is : ");
    int k;
    for(k=0;k<n;k++)
    {
        printf("%d ",a[k]);
    }
    printf("\n\n")
    return 0;
}
