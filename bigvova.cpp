#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n, i;
        cin >> n;
        vector<int> a(n);
        for (i = 0; i < n; i++)
            cin >> a[i];
        int cur = 0;
        while (!a.empty()) 
        {
            int mx = 0, j = -1;
            for (i = 0; i < int(a.size()); i++)
            {
                int x = gcd(a[i], cur);
                if (x > mx) 
                {
                    mx = x;
                    j = i;
                }
            }
            cur = mx;
            cout << a[j] << " \n"[a.size() == 1];
            a.erase(a.begin() + j);
        }
    }
    
    return 0;
} 
