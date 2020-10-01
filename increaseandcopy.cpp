#include <bits/stdc++.h>
using namespace std;

int main() 
{
    long long t;
    cin >> t;
    while (t--) 
    {
        long long n, max, d;
        cin >> n;
        max = floor(sqrt(n));
        d = (n + max - 1) / max;
        cout << d + max - 2 << "\n";
    }
    return 0;
}
