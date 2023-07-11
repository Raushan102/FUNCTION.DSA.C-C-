#include <stdio.h>

#include <conio.h>

int main()
{
    int f1 = 0, f2 = 1, f3;

    int i = 1, n;

    printf("enter a number");

    scanf("%d", &n);

    printf("%d \n", f1);

    while (i <= n)
    {
        f3 = f1 + f2;

        printf("%d \n", f3);

        f1 = f2;

        f2 = f3;

        i++;
    }

    return 0;
}