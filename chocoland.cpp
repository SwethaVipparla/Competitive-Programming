#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
	int t;
	cin >> t;
	while(t--)
	{
	    ll n, k, s, num;
	    cin >> n >> k >> s;
	    ll a = k * s;
	    ll sum = s - (s / 7); 
        if(a % n == 0)
           num = a / n;
        else
            num = (a / n) + 1;
        if(num <= sum && num > 0)
            cout << num << "\n";
        else
            cout << "-1" << "\n";
	}
	return 0;
}
