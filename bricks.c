/*
Pink Floyd are pulling a prank on Roger Waters. They know he doesn't like walls, he wants to be able to walk freely, so they are blocking him from exiting his room which can be seen as a grid.

Roger Waters has a square grid of size n×n and he wants to traverse his grid from the upper left (1,1) corner to the lower right corner (n,n). Waters can move from a square to any other square adjacent by a side, as long as he is still in the grid. Also except for the cells (1,1) and (n,n) every cell has a value 0 or 1 in it.

Before starting his traversal he will pick either a 0 or a 1 and will be able to only go to cells values in which are equal to the digit he chose. The starting and finishing cells (1,1) and (n,n) are exempt from this rule, he may go through them regardless of picked digit. Because of this the cell (1,1) takes value the letter 'S' and the cell (n,n) takes value the letter 'F'.

For example, in the first example test case, he can go from (1,1) to (n,n) by using the zeroes on this path: (1,1), (2,1), (2,2), (2,3), (3,3), (3,4), (4,4)

The rest of the band (Pink Floyd) wants Waters to not be able to do his traversal, so while he is not looking they will invert at most two cells in the grid (from 0 to 1 or vice versa). They are afraid they will not be quick enough and asked for your help in choosing the cells. Note that you cannot invert cells (1,1) and (n,n).

We can show that there always exists a solution for the given constraints.

Also note that Waters will pick his digit of the traversal after the band has changed his grid, so he must not be able to reach (n,n) no matter what digit he picks.
*/

#include <stdio.h>
 
#define ll long long
 
const int N = 205;
 
ll n;
char a[N][N];
 
void check(ll x, ll y, char ch)
{
	if(a[x][y] == ch)
    prinft("%ld %ld\n", x, y);
}
 
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		scanf("%ld", &n);
		
		for(ll i = 1; i <= n; i++)
			for(ll j = 1; j <= n; j++)
				scanf("%c", &a[i][j]);
				
		int cnt0 = 0, cnt1 = 0;
		
		cnt0 += (a[1][2] == '0');
		cnt0 += (a[2][1] == '0');
		cnt0 += (a[n][n - 1] == '1');
		cnt0 += (a[n - 1][n] == '1');
		
		if(cnt0 >= 2)
		{
			printf("%ld\n", 4 - cnt0);
			check(1, 2, '1');
			check(2, 1, '1');
			check(n, n - 1, '0');
			check(n - 1, n, '0');
		}
		else
		{
			printf("%ld\n", cnt0);
			check(1, 2, '0');
			check(2, 1, '0');
			check(n, n - 1, '1');
			check(n - 1, n, '1');
		}
	}
	return 0;
}
