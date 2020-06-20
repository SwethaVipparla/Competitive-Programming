#include <bits/stdc++.h>
using namespace std;
#define ll long long 

void solve()
{
    ll n , f, i, count = 0, index = 0, lg = 0;
	cin >> n;
    for(i = 2;i <= n; i++)
    {
        if(n % i == 0)
            count++;
        if(count == 2)
            {
                f = i;
                break;
            }
    }
    count = 0;
    ll num = 0 , m = 1;
    while(n)
        {
            count++;
            int rem = n % 10;
            if(rem >= lg)
            {
                lg = rem;
                index = count;
            }
            if(rem % 2 == 0)
                rem += 1;
            n /= 10;
            num += (rem * m);
            m *= 10;
        }
    cout << f << " " << index << " " << num;
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
