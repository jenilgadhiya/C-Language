#include <stdio.h>

main()
{
    int arry[5][5];
    
    printf("Enter array's elements:\n");
    for (int i = 0; i < 5; i++)
     {
        for (int j = 0; j < 5; j++)
         {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arry[i][j]);
        }
    }
    
    printf("The boundary elements of the array are:\n");
    int sum = 0;
    for (int i = 0; i < 5; i++)
     {
        for (int j = 0; j < 5; j++) 
        {
            if (i == 0 || i == 4 || j == 0 || j == 4) 
            {
                printf("%d ", arry[i][j]);
                sum += arry[i][j];
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
    
    printf("\nThe sum of boundary elements of an Array: %d\n", sum);
 
}
