#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    unsigned long int a = 0, b = 1, c;
    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            printf("%lu", a);
        }
        else if (i == 2)
        {
            printf("\n%lu", b);
        }
        else
        {
            c = a + b;
            printf("\n%lu", c);
            a = b;
            b = c;
        }
    }
}