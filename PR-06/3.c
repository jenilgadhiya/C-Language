#include <stdio.h>

main()
{
    char pass[50];
    int letter = 0, digit = 0, symbol = 0;
    int len = 0;
    printf("you only use this symbol :- ( @ # $ % & . )and password must be at least 6 characters\n");
    printf("Create your password: ");
    scanf("%s", pass);

    for (int i = 0; pass[i] != '\0'; i++)
    {
        len++;
        if
         ((pass[i] >= 65 && pass[i] <= 90) || (pass[i] >= 97 && pass[i] <= 122))
            letter = 1;
        else if 
        (pass[i] >= 48 && pass[i] <= 57)
            digit = 1;

        else if 
        ((pass[i] >= 35 && pass[i] <= 38) || (pass[i] == 64 || 46))
            symbol = 1;
    }

    if 
    (letter && digit && symbol && len >= 6)
        printf("Your password is very Strong.\n");
    else
        printf("Your password is not Strong.\n");
}
