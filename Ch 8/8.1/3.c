#include <stdio.h>

main()
{
    int size;

    printf("Enter array size: ");
    scanf("%d", &size);

    int arrayA[size], arrayB[size], arrayC[size];

    printf("Enter array A's elements:\n");
    for (int i = 0; i < size; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &arrayA[i]);
    }

    printf("Enter array B's elements:\n");
    for (int i = 0; i < size; i++)
    {
        printf("b[%d] = ", i);
        scanf("%d", &arrayB[i]);
    }
    for (int i = 0; i < size; i++)
    {
        arrayC[i] = arrayA[i] + arrayB[i];
    }

    printf("Array C is: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d", arrayC[i]);
       
    }
    printf("\n");
}
