#include <stdio.h>
int main()
{
    int n,e;
    printf("\n Enter no. of elements : ");
    scanf("%d", &n);
    int a[n];
    printf("\n Enter array : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\n Enter element to search : ");
    scanf("%d", &e);
    for (int i = 0; i < n; i++)
    {
        if (e == a[i])
        {
            printf("\n Element is found.");
            printf("\n position of element in array is : %d", i + 1);
            break;
        }
        if (i == (n - 1))
        {
            printf("\n Element not found in the array.");
        }
    }
    return 0;
}
