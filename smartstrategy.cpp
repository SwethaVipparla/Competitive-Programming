#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, i, j;
    cin >> t;
    while(t--)
    {
        int n, q;
        cin >> n >> q;
        int d, x;
        int p = 1;
        for(i = 0; i < n; i++)
        {
            cin >> d;
            if(p < 1e9)
                p *= d;
        }
        for(j = 0; j < q; j++)
        {
            cin >> x;
            cout << x / p <<" ";
        }
    }
	return 0;
}
