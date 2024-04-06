#include <stdio.h>

void binary(int num)
{
    if (num > 1)
        binary(num / 2);
    printf("%d", num % 2);
}

int main()
{
    int num;

    printf("Enter a decimal number: ");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("negative numbers is not supported.\n");
        return 1;
    }

    printf("Binary : ");
    if (num == 0)
        printf("0");
    else
        binary(num);

    return 0;
}
