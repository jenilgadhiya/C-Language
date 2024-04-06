#include <stdio.h>

void Addition(int n1, int n2);
void Subtraction(int n1, int n2);
void Multiplication(int n1, int n2);
void Division(int n1, int n2);
void Percentage(int n1, int n2);

int main()
{
    int n1, n2;
    int choice;
    do
    {
        printf("\n\nPress 1 For Addition (+)\n");
        printf("Press 2 For Subtract(-)\n");
        printf("Press 3 For Multiply(*)\n");
        printf("Press 4 For Division(/)\n");
        printf("Press 5 For Percent (%%)\n");
        printf("Press 6 For Exit\n\n");
        printf("Enter Your Choice... \n");

        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            Addition(n1, n2);
            break;
        case 2:
            Subtraction(n1, n2);
            break;
        case 3:
            Multiplication(n1, n2);
            break;
        case 4:
            Division(n1, n2);
            break;
        case 5:
            Percentage(n1, n2);
            break;
        case 6:
            printf("You Are Now Exiting.\n");
            break;
        default:
            printf("Invalid choice. Please try again.\n");
            break;
        }
    } while (choice != 6);

    return 0;
}

void Addition(int n1, int n2)
{
    printf("Enter First Number: ");
    scanf("%d", &n1);
    printf("Enter Second Number: ");
    scanf("%d", &n2);
    printf("Result: %d\n", n1 + n2);
}
void Subtraction(int n1, int n2)
{
    printf("Enter First Number: ");
    scanf("%d", &n1);
    printf("Enter Second Number: ");
    scanf("%d", &n2);
    printf("Result: %d\n", n1 - n2);
}
void Multiplication(int n1, int n2)
{
    printf("Enter First Number: ");
    scanf("%d", &n1);
    printf("Enter Second Number: ");
    scanf("%d", &n2);
    printf("Result: %d\n", n1 * n2);
}
void Division(int n1, int n2)
{
    printf("Enter First Number: ");
    scanf("%d", &n1);
    printf("Enter Second Number: ");
    scanf("%d", &n2);
    if (n2 != 0)
    {
        printf("Result: %d\n", n1 / n2);
    }
    else
    {
        printf("Error: Division by zero.\n");
    }
}
void Percentage(int n1, int n2)
{
    printf("Enter Total Number: ");
    scanf("%d", &n1);
    printf("Enter Percentage: ");
    scanf("%d", &n2);
    printf("Result: %d\n", (n1 * n2) / 100);
}