
#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n;
        string s;
        cin >> n >> s;
        for (int i = 0; i < n; i++)
            cout << s[2*i];
        cout << "\n";
    }
 
    return 0;
}
