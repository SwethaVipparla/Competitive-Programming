#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    ll n, k , i, g=0, count=0;
    cin >> n >> k;
    char arr[n];
    for(i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);
    for(i = 0; i < n - 1; i++)
    {
        count=1;
        while (arr[i] == arr[i+1] && i < n - 1)
        {
            count++;
            i++;
        }
        if((count % 2 != 0) || (count / 2 > k))
            g--;
    }
    if(g == 0)
        cout << "YES";
    else
        cout << "NO";
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
