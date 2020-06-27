#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
	ll t;
	cin >> t;
	while(t--) 
	{
	    string sn, s1, s2;
	    int i;
	    ll maxi = (1ll << 60);
	    cin >> sn;
	    ll nn = (ll)(sn.length());
	    for(i = 0; i < nn; i++) 
	    {
	        if((i + 1) <= nn) 
	            s1 = sn.substr(i + 1);
	            s2 = sn.substr(0, i);
    	        s2 += s1;
    	        maxi = min(maxi, stoll(s2));
	    }
	    cout << maxi << "\n";
	}
	
}
