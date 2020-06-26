#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x=(int)(pow(2, 16) + 0.5);
    int t;
    cin >> t;
    for(int k = 1; k < t; k++)
    {
        int n;
        cin >> n;
        int a[n];
        int b[n];
        int i, en;
        for(i = 0; i < n; i++)
       {
            cin >> en;
            b[i] = en % x;
            a[i]=(en - b[i]) / x;
        }
        cout << "Case " << k << ":" << "\n";
      for(i = 0; i < n; i++)
        cout << b[i] << " ";
      cout << "\n";
      for(i = 0; i < n; i++)
        cout << a[i] <<" ";
    }
    return 0;
}
