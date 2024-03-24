#include <stdio.h>

main()
{
    int rows, cols;

    printf("Enter the array's row size: ");
    scanf("%d", &rows);
    printf("Enter the array's column size: ");
    scanf("%d", &cols);

    int arrA[rows][cols];
    int arrB[rows][cols];
    int arrC[rows][cols];

    printf("Enter array A's elements:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arrA[i][j]);
        }
    }

    printf("Enter array B's elements:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("b[%d][%d] = ", i, j);
            scanf("%d", &arrB[i][j]);
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            arrC[i][j] = arrA[i][j] + arrB[i][j];
        }
    }

    printf("Array C is:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d\t", arrC[i][j]);
        }
        printf("\n");
    }


}
