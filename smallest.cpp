#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, i;
        cin >> n;
        int a[n];
        for(int i = 0 ; i < n ; i++)
            cin >> a[i];
        sort(a, a+n);
        for(i = 0 ; i < n-1 ; i++)
        {
            if(a[i+1] - a[i] > 1)
            {
              cout << "NO\n";
              break;
            }
        }
        if(i == n-1 || n == 1)
            cout << "YES\n";
    }
    return 0;
}
