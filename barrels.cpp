#include<bits/stdc++.h>

using namespace std;
int n, a[200010],k;
long long sum;

inline int read()
{
	int x = 0,w = 0;
	char ch = 0;
	
	while(!isdigit(ch))
	{
	    w = ch =='-';
	    ch = getchar();
	}
	
	while(isdigit(ch))
	{
	    x = (x << 1) + (x << 3) + (ch^48);
	    ch = getchar();
	}
	return w ? -x : x;
}

int main()
{
	int t = read();
	while(t--)
	{
		n=read();
		k=read();
		for(int i = 1; i <= n; i++)
			a[i] = read();
		sort(a + 1, a + 1 + n);
		reverse(a + 1, a + 1 + n);
		sum = 0;
		for(int i = 1; i <= k + 1; i++)
			sum += a[i];
		cout << sum << '\n';
	}
}
