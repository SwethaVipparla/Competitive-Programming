/*
A matrix of size n×m is called nice, if all rows and columns of the matrix are palindromes. A sequence of integers (a1,a2,…,ak) is a palindrome, if for any integer i (1≤i≤k) the equality ai=ak−i+1 holds.

Sasha owns a matrix a of size n×m. In one operation he can increase or decrease any number in the matrix by one. Sasha wants to make the matrix nice. He is interested what is the minimum number of operations he needs.

Help him!
*/


#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int t, n, m, w[5], a[102][102];
ll ans = 0;
 
int absolute(int x)
{
	if(x >= 0) 
	    return x;
	return (-x);
}
 
int condition(int aa, int b, int c, int d)
{
	int ret = 0;
	w[1] = aa;
	w[2] = b; 
	w[3] = c; 
	w[4] = d;
	
	sort(w+1, w+5);
	for(int i = 1;i <= 4;i++)
		ret += absolute(w[i] - w[2]);
 
	return ret;
}
 
int main()
{
	cin >> t;
	while(t--)
	{
		scanf("%d%d",&n, &m);
		ans = 0;
		for(int i = 1;i <= n; i++)
		    for(int j = 1;j <= m;j++)
			    scanf("%d",&a[i][j]);
		
		for(int i = 1;i <= (n-1) / 2 + 1;i++)
		    for(int j = 1;j <= (m-1) / 2 + 1;j++)
		    {
			    if(i*2-1 == n)
		    	{
				    if(j*2-1 != m)
				    	ans += absolute(a[i][j] - a[i][m-j+1]);
			    }
			    else
		    	{
			    	if(j*2-1 == m)
					    ans += absolute(a[i][j] - a[n-i+1][j]);
				    else
					    ans += condition(a[i][j], a[n-i+1][j], a[i][m-j+1], a[n-i+1][m-j+1]);
			    }
	    	}
	    	
		printf("%lld\n", ans);
	}
	return 0;
}
