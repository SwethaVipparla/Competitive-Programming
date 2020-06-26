#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, i;
        cin >> n;
        int a[n], b[n];
        for(i = 0; i < n; i++)
            cin >> a[i];
        for(i = 0; i < n; i++)
            cin >> b[i];
        sort(a, a + n);
        sort(b, b + n);
        int x = a[n - 1] + a[n - 2];
        int y = b[n - 1] + b[n - 2];
        if(x > y)
            cout << "AAYUSHI\n";
        else
            cout << "DAKSH\n";
    }
	return 0;
}
