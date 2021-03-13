#include <stdio.h>

int main()
{
    int n;
    int ans;
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        if (i * i > n)
        {
            break;
        }
        ans = i;
    }
    printf("%d", ans);
}