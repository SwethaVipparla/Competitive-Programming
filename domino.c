#include <stdio.h>
 
int main(void)
{
    int m, n, area;
    scanf("%d", &m);
    scanf("%d", &n);
    area = m * n;
    if(area % 2 == 0)
    {
        printf("%d\n", area / 2);
    }
    else
    {
        printf("%d\n", (area - 1) / 2);
    }
    return 0;
}
