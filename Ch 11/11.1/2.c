#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int i, j;

    printf("Enter the value of x: ");
    scanf("%d", &i);
    printf("Enter the value of y: ");
    scanf("%d", &j);

    printf("Before swapping, i = %d and j = %d\n", i, j);

    swap(&i, &j);

    printf("After swapping, i = %d and j = %d\n", i, j);

    return 0;
}
