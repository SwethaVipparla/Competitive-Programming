#include <iostream>
using namespace std;
#define ll long long int

ll ans (ll x, ll n)
{
    ll A = 1000000007;
    ll sol = 1;
    while(n > 0)
    {
        if(n % 2 == 1)
            sol = (sol * x) % A;
        x = (x * x) % A;
        n = n / 2;
    }
    return (sol % A);
}
int main() 
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	ll n;
	cin >> t;
	while(t--)
	{
		cin >> n;
		n = ans(2 , n);
		if(n == 0)
		    cout << "1000000006" << "\n";
		else
		    cout << n-1 << "\n";
	}
	return 0;
}
