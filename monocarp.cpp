/*
Chef Monocarp has just put n dishes into an oven. He knows that the i-th dish has its optimal cooking time equal to ti minutes.

At any positive integer minute T Monocarp can put no more than one dish out of the oven. If the i-th dish is put out at some minute T, then its unpleasant value is |T−ti| — the absolute difference between T and ti. Once the dish is out of the oven, it can't go back in.

Monocarp should put all the dishes out of the oven. What is the minimum total unpleasant value Monocarp can obtain?
*/

#include<bits/stdc++.h>
#define rep(i, l, r) for(int i=l; i<=r; ++i)
#define N 405
#define inf 1000000000
using namespace std;
int t;
int n;
int a[N], dp[N][N];
int main()
{
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d", &n);
		rep(i, 1, n)
		{
			scanf("%d", &a[i]);
		}
		sort(a+1, a+n+1);
		dp[0][0]=0;
		rep(i, 1, n)
		{
			rep(j, i, 400)
			{
				dp[i][j]=min(dp[i-1][j-1], dp[i-1][i-1])+abs(a[i]-j);
				if(a[i-1]>i-1 && a[i-1]<j-1) dp[i][j]=min(dp[i][j], dp[i-1][a[i-1]]+abs(a[i]-j));
			}
		}
		int ans=inf;
		rep(j, n, 400) 
		    ans=min(ans, dp[n][j]);
		printf("%d\n", ans);
	}
	return 0;
} 
