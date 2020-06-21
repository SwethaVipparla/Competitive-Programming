#include <bits/stdc++.h>
using namespace std;
#define ll long long 

void solve()
{
     ll x , k, sum = 0, sum2 = 0, i;
     cin >> x >> k;
     for(i = 2;i <= x; i++)
     {
	  {
	      if(x % i == 0)
	          sum += pow(i, k);
	   }
     }
     cout << sum << " ";
     for(i = 2; i < x; i++)
     {
	  if(k % i == 0)
	      sum2 += x * i;
     }
     cout << sum2;
}

int main() 
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     ll t;
     cin >> t;
     while(t--)
     {
        solve();
        cout << "\n";
     }
     return 0;
}
