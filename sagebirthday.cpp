/*
Today is Sage's birthday, and she will go shopping to buy ice spheres. All n ice spheres are placed in a row and they are numbered from 1 to n from left to right. Each ice sphere has a positive integer price. In this version all prices are different.

An ice sphere is cheap if it costs strictly less than two neighboring ice spheres: the nearest to the left and the nearest to the right. The leftmost and the rightmost ice spheres are not cheap. Sage will choose all cheap ice spheres and then buy only them.

You can visit the shop before Sage and reorder the ice spheres as you wish. Find out the maximum number of ice spheres that Sage can buy, and show how the ice spheres should be reordered.
*/


#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n, t;
    scanf("%d", &n);
    
    int a[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);
        
    sort(a, a+n);
    
    if(n % 2 != 0)
    {
        printf("%d\n", n / 2);
        for(int i = 0, j = n - 1; i <= j; i++, j--)
        {
            printf("%d ", a[j]);
            if(i == j)
                break;
            printf("%d ", a[i]);
        }
        printf("\n");
    }
    
    else
    {
        printf("%d\n", (n/2)-1);
        for(int i = 0, j = n - 1; i <= j; i++, j--)
        {
            printf("%d ", a[j]);
            if(i == j)
                break;
            printf("%d ", a[i]);
        }
        printf("\n");
    }
    
    return 0;
}
