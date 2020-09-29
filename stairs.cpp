#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
  {
	  long long x;
		cin >> x;
		long long g = 0, sum = 0;
		for(int i=0;; i++)
    {
			g += (1ll << i);
			sum += g * (g + 1) / 2;
			if(sum > x)
      {
				cout << i << "\n";
				break;
			}
		}
	}
}
