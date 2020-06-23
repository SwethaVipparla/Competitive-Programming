#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() 
{
    ll t;
    cin >> t;
    while(t--)
   {
        ll a, b, c, d;
        cin >> a >> b >> c >> d;
        if(a == b)
            cout << "YES\n";
       else
       {
            if(c != d)
           {
                if(abs(b - a) % abs(c - d) == 0)
                    cout << "YES\n";
                else
                    cout << "NO\n";
           }
           else
                cout << "NO\n";
       }
    }
    return 0;
}
