#include <stdio.h>

int main()
{
    int n, i;
    int t1 = 0, t2 = 1, nextterm;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("The first %d terms of the Fibonacci series are:\n", n);

    for (i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            printf("%d ", t1);
        }
        else if (i == 2)
        {
            printf("%d ", t2);
        }
        else
        {
            nextterm = t1 + t2;
            printf("%d ", nextterm);
            t1 = t2;
            t2 = nextterm;
        }
    }

    printf("\n");

    return 0;
}
