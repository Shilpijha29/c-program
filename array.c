// addition of two array elements
#include<stdio.h>
void main()
{
    int a[10], b[10], c[10], n, i;

    printf("Enter the number of element in array\n");
    scanf("%d", &n);

    printf("Enter %d element for array1: \n", n);
    for(i=0; i<n;i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter %d element for array2: \n", n);
    for(i=0;i<n;i++)
    {
        scanf("%d", &b[i]);
    }
    for(i=0; i<n;i++)
    {
        c[i] = a[i] + b[i];
    }

    printf("The sum of two array elements are:\n" );
    for(i=0; i<n; i++)
    {
        printf("%d\n", c[i]);
    }

}