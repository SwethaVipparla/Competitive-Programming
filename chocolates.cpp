#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, x, a[1500], i, flag = 0;
    cin >> n;
    cin >> x;
    for(i = 0; i < n; i++)
        cin >> a[i];
    for(i = 0; i < n; i++)
    {
        if(a[i] == 1)
        {
            flag = 1;
            break;
        }
    }
    if(flag == 1)
        cout << "Impossible";
    else
        cout << "Possible";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        solve();
        cout  << "\n";
    }
	return 0;
}
