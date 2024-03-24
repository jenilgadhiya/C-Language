#include <stdio.h>
main()
{
    int fy, sy;
    printf("Enter the first number: ");
    scanf("%d", &fy);

    printf("Enter the second number: ");
    scanf("%d", &sy);
    if (fy > sy)
    {
        int temp = fy;
        fy = sy;
        sy = temp;
    }

    int leapYears[100];
    int leapCount = 0;

    for (int year = fy; year <= sy; year++)
    {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        {
            leapYears[leapCount++] = year;
        }
    }

    printf("The array is: ");
    for (int i = 0; i < leapCount; i++)
    {
        printf("%d", leapYears[i]);
        if (i != leapCount - 1)
        {
            printf(" ");
        }
    }
    printf("\n");
}
