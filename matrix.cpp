#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--) 
{
        int n, m, i;
        cin >> n >> m;
        bool done = 0;
        for (i = 0; i < n; i++) 
        {
            int a, b, c, d;
            cin >> a >> b >> c >> d;
            done |= b == c;
        }
        cout << (m % 2 == 0 && done ? "YES" : "NO") << "\n";
    }
 
    return 0;
}
