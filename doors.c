#include <stdio.h>

int main(void)
{
    int a[200010];
    int n, i;
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i = n-1; i > 0; i--)
    {
        if(a[i] != a[i+1])
        {
            printf("%d\n", i);
            break;
        }
    }
    return 0;
}