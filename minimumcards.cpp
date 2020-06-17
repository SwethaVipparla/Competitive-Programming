#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() 
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n, i, count = 0;
	string s;
	cin >> n;
	cin >> s;
	for(i = 0; i < n; i++)
	{
	    if(s[i] == s[i+1])
	    {
	        count++;
	    }
	}
	cout << count << "\n";
	return 0;
}
