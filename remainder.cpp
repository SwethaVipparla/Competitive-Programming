#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    ll a, b, c;
    cin >> a >> b >> c;
    ll rem = c - (c % a);
        if(rem + b <= c)
            cout << rem + b;
        else
            cout << rem - a + b ;
}

int main() 
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll t;
	cin >> t;
	while(t--)
	{
	    solve();
	    cout << "\n";
	}
	return 0;
}
