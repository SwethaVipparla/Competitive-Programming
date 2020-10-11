/*
You like playing chess tournaments online.

In your last tournament you played n games. For the sake of this problem, each chess game is either won or lost (no draws). When you lose a game you get 0 points. When you win you get 1 or 2 points: if you have won also the previous game you get 2 points, otherwise you get 1 point. If you win the very first game of the tournament you get 1 point (since there is not a "previous game").

The outcomes of the n games are represented by a string s of length n: the i-th character of s is W if you have won the i-th game, while it is L if you have lost the i-th game.

After the tournament, you notice a bug on the website that allows you to change the outcome of at most k of your games (meaning that at most k times you can change some symbol L to W, or W to L). Since your only goal is to improve your chess rating, you decide to cheat and use the bug.

Compute the maximum score you can get by cheating in the optimal way.
*/


#include<bits/stdc++.h>
using namespace std;

char a[100010];
int b[100010];

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n, k, i;
		
		scanf("%d%d", &n, &k);
		scanf("%s", a);
		int count = 0, l = -1, c = 0, s = 0;
		
		for(i = 0; i < n; i++)
		{
			if(a[i] == 'W')
			{
				if(l != -1 && l + 1 != i) 
				    b[count++] = i - l - 1;
				l = i;
				s++;
				if(i && a[i-1] == 'W')
				    s++;
			}
			else 
			    c++;
		}
		
		sort(b, b + count);
		
		if(k >= c)
		    printf("%d\n", 2 * n - 1);
		else if(c == n)
		    printf("%d\n", max(0 , 2 * k - 1));
		else
		{
			for(i = 0; i < count; i++)
			{
				if(b[i] <= k)
				    s += 2 * b[i] + 1, k -= b[i];
				else 
				    s += 2 * k, k = 0;
			}
			s += 2 * k;
			printf("%d\n", s);
		}
	} 
}
