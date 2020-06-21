#include <bits/stdc++.h> 
using namespace std; 
#define ll long long

int main() 
{
	ll t, x;
	cin >> t;
	while(t--)
	{
	    cin >> x;
	    ll n = 1, sum = 1,flag = 0;
	    while(1)
	    {
	        n *= 2;
	        if(n == x)
	        {
	            flag = 1;
	            break;
	        }
	        
	        if((n - 1) % 3 == 0 && abs((n - 1) /3 ))
	            { 
	                flag = 1;
	                break;
	            }
	    }
	    if(flag == 1)
	        cout << "Yes\n";
	    else
	        cout << "No\n";
	}
	return 0;
}
