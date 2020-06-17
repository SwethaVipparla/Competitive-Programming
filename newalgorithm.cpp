#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() 
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n, a, d;
	cin >> n >> a;
	while(a--)
	{
	    d = n % 10;
	    if(d == 0)
	        n /= 10;
	    else
	        n -= 1;
	    if(n == 0)
	        break;
	}
	cout << n << "\n";
	return 0;
}

