#include <stdio.h>

main()
{
    int size, sum = 0;
    float ave;

    printf("Enter array size: ");
    scanf("%d", &size);

    int array[size];

    printf("Enter array elements:\n");
    for (int i = 0; i < size; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &array[i]);
        sum += array[i];
    }

    ave = (float)sum / size;
    printf("Average of an Array: %.1f\n", ave);
}
