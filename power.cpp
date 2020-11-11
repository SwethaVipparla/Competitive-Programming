/*
Let's call a list of positive integers a0,a1,...,an−1 a power sequence if there is a positive integer c, so that for every 0≤i≤n−1 then ai=ci.

Given a list of n positive integers a0,a1,...,an−1, you are allowed to:

Reorder the list (i.e. pick a permutation p of {0,1,...,n−1} and change ai to api), then
Do the following operation any number of times: pick an index i and change ai to ai−1 or ai+1 (i.e. increment or decrement ai by 1) with a cost of 1.
Find the minimum cost to transform a0,a1,...,an−1 into a power sequence.
*/


#include <bits/stdc++.h>
using namespace std;

#define ll long long
int n, a[100010];

signed main()
{
	cin >> n;
	ll i, j;
	for(i = 1;i <= n;i++)
		scanf("%lld",&a[i]);
		
	sort(a+1, a+n+1);
	ll las = 1e18;
	for(i = 1;i <= 1000000;i++)
	{
		ll now=1, ans=0;
		for(j=1;j<=n;j++)
		{
			ans+=abs(now-a[j]);
			now *= i;
			if(ans>=las)
			{
				cout << las << "\n";
				return 0;
			}
		}
		las = ans;
	}
}
