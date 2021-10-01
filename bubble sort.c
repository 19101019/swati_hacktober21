#include<stdio.h>
int main()
{
    int a[100],n,i;
    printf("\n Enter size of array : ");
    scanf("%d",&n);
    printf("\n Enter array : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",a[i]);
    }
    int j,temp;
    //bubble sort code.
    for(i=0;i<=n-2;i++)
    {
        for(j=i+1;j<=n-1;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("\n Your sorted array is : ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n\n");

    return 0;
}
