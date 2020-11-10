/*
Pikachu is a cute and friendly pokémon living in the wild pikachu herd.

But it has become known recently that infamous team R wanted to steal all these pokémon! Pokémon trainer Andrew decided to help Pikachu to build a pokémon army to resist.

First, Andrew counted all the pokémon — there were exactly n pikachu. The strength of the i-th pokémon is equal to ai, and all these numbers are distinct.

As an army, Andrew can choose any non-empty subsequence of pokemons. In other words, Andrew chooses some array b from k indices such that 1≤b1<b2<⋯<bk≤n, and his army will consist of pokémons with forces ab1,ab2,…,abk.

The strength of the army is equal to the alternating sum of elements of the subsequence; that is, ab1−ab2+ab3−ab4+….

Andrew is experimenting with pokémon order. He performs q operations. In i-th operation Andrew swaps li-th and ri-th pokémon.

Note: q=0 in this version of the task.

Andrew wants to know the maximal stregth of the army he can achieve with the initial pokémon placement. He also needs to know the maximal strength after each operation.

Help Andrew and the pokémon, or team R will realize their tricky plan!
*/


#include <bits/stdc++.h>

using namespace std;
 
#define N 50007
 
inline int rd() 
{
	int x = 0;
	bool f = 0;
	char c = getchar();
	while (!isdigit(c)) 
	{
		if (c == '-') 
		    f = 1;
		c = getchar();
	}
	while (isdigit(c)) 
	{
		x = x * 10 + (c ^ 48);
		c = getchar();
	}
	return f ? -x : x;
}
 
int n, q;
 
long long ans;
 
inline void work() 
{
	ans = 0;
	n = rd(); 
	q = rd();
	int lst = 0;
	for (int i = 1, x; i <= n; ++i) 
	{
		x = rd();
		ans += max(0, x - lst);
		lst = x;
	}
	printf("%lld\n", ans);
}
 
int main() 
{
	int t = rd();
	while (t--) 
	    work();
	return 0;
}
