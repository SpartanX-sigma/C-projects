#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int a, f, c;
    char b;

    while (1)
    {
        printf("===WELCOME TO CALCINATOR===\n");
        printf("1. Calculation\n");
        printf("2. Exit\n");

        scanf("%d", &f);

        switch (f)
        {
        case 1:

            printf("Enter the calculation: ");
            fflush(stdout);
            scanf("%d %c %d", &a, &b, &c);

            switch (b)
            {
            case '+':
                printf("%d\n", a + c);
                break;

            case '-':
                printf("%d\n", a - c);
                break;

            case '*':
                printf("%d\n", a * c);
                break;

            case '/':
                printf("%d\n", a / c);
                break;

            default:
                break;
            }
            break;

        case 2:
            exit(1);

        default:
            break;
        }
    }

    printf("Hello\n");

    return 0;
}