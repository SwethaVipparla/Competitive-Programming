#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() 
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll i, t, n, k, x;
	cin >> t;
    while (t--)
    {
        ll lr = 0;
        cin >> n >> k;
        for (i = 0; i < n; i++)
        {
            cin >> x;
            if (x > k)
                lr += x - k;
        }
        cout << lr << "\n";    
    }
    return 0;
}
