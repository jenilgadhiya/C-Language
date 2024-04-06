#include <stdio.h>

void upper(char n)
{
    if (n > 'Z')
        return;
    printf("%c ", n);
    upper(n + 1);
}

void lower(char n)
{
    if (n > 'z')
        return;
    printf("%c ", n);
    lower(n + 1);
}

int main()
{
    printf("Uppercase Alphabets: ");
    upper('A');
    printf("\n");

    printf("Lowercase Alphabets: ");
    lower('a');
    printf("\n");

    return 0;
}
