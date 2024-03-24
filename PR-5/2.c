#include <stdio.h>
main()
{
    int r, c;
    printf("enter row : ");
    scanf("%d", &r);
    printf("enter column : ");
    scanf("%d", &c);

    int a[r][c];
    int i, j, k;

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("eneter element :");
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (a[i][j] > k)
            {
                k = a[i][j];
            }
        }
    }
    printf("\n-----:largest number:-----\n%d", k);
}