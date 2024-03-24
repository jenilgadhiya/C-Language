#include <stdio.h>

main()
{
    int sizeA, sizeB, sizeC;

    printf("Enter array A's size: ");
    scanf("%d", &sizeA);

    int arrayA[sizeA];

    printf("Enter array A's elements:\n");
    for (int i = 0; i < sizeA; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &arrayA[i]);
    }

    printf("Enter array B's size: ");
    scanf("%d", &sizeB);

    int arrayB[sizeB];

    printf("Enter array B's elements:\n");
    for (int i = 0; i < sizeB; i++)
    {
        printf("b[%d] = ", i);
        scanf("%d", &arrayB[i]);
    }

    sizeC = sizeA + sizeB;
    int arrayC[sizeC];
    for (int i = 0; i < sizeA; i++)
    {
        arrayC[i] = arrayA[i];
    }
    for (int i = 0; i < sizeB; i++)
    {
        arrayC[sizeA + i] = arrayB[i];
    }

    printf("Array C is: ");
    for (int i = 0; i < sizeC; i++)
    {
        printf("%d", arrayC[i]);
       
    }
    printf("\n");
}
