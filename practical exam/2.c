#include<stdio.h>

main()
{
    int n,i,sum=0;

    printf("Enter element: ");
    scanf("%d",&n);

    int a[n];

    for(i=0;i<n;i++)
    {
        printf("Enter a[%d]: ",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    printf("\nSum = %d\n",sum);
}