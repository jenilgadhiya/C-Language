#include <stdio.h>

void rev(int num)
{

    if (num == 0)
        return;

    printf("%d", num % 10);

    rev(num / 10);
}

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Reverse of %d is ", number);
    rev(number);

    return 0;
}
