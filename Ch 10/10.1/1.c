#include <stdio.h>

int cube(int num)
{
    return num * num * num;
}

int main()
{
    int num;

    printf("Enter any number: ");
    scanf("%d", &num);

    int result = cube(num);

    printf("Cube is: %d\n", result);

    return 0;
}