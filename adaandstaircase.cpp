#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t, n, i, j, ans, x, k;
    string s;
    cin >> t;
    while(t--)
    {
    	ans = 0;
    	cin >> n >> k;
    	ll a[n + 1];
    	a[0] = 0;
    	for(i = 0; i < n; i++)
    		cin >> a[i + 1];
    	for(i = 0; i < n; i++)
    	{
    		if(a[i + 1] - a[i] > k)
    			ans += (a[i + 1] - a[i] - 1) / k;
    	}
    	cout << ans << endl;
    }
	return 0;
}
