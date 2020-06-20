#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main() 
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll t;
	cin >> t;
	while(t--)
	{
	    ll n, ans;
	    cin >> n;
	    ans = (n * (n + 1) / 2) + 1;
	    cout << ans << "\n";
	}
	return 0;
}
