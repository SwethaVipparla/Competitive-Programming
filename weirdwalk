#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    int n; 
    cin >> n;
    int a[n], b[n], i;
    ll w = 0, s1 = 0, s2 = 0;
    for(i = 0; i < n; i++)
        cin >> a[i];
    for(i = 0; i < n; i++)
        cin >> b[i];
    for(i = 0; i < n; i++)
    {
        s1 += a[i];
        s2 += b[i];
        if(a[i] == b[i] && s1 == s2) 
            w += a[i]; 
    }
    cout << w;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t; 
    cin >> t;
    while(t--)
    {
        solve();
        cout << "\n";
    }
    return 0;
}
