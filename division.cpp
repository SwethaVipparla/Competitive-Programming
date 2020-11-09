/*
Oleg's favorite subjects are History and Math, and his favorite branch of mathematics is division.

To improve his division skills, Oleg came up with t pairs of integers pi and qi and for each pair decided to find the greatest integer xi, such that:

pi is divisible by xi;
xi is not divisible by qi.
Oleg is really good at division and managed to find all the answers quickly, how about you?
*/



#include<bits/stdc++.h>
using namespace std;

int T, x, y;

signed main()
{
	scanf("%lld", &T);
	while (T--)
	{
		scanf("%lld %lld", &x, &y);
		if (x%y != 0)
		    printf("%lld\n", x);
		else 
		{
			int ans=0,t=y;
			for (int i=2;i*i<=y;i++)
			if (y%i==0)
			{
				while (y%i==0)
				    y /= i;
				int a=x;
				while (a%t == 0)
				    a /= i;
				ans=max(ans,a);
			}
			if (y!=1)
			{
				int a=x;
				while (a%t == 0)
				    a/=y;
				ans=max(ans,a);
			}
			printf("%lld\n",ans);
		}
	}
}
