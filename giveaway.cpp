#include <iostream>
using namespace std;
#define ll long long int

int main() 
{
	int t;
	cin >> t;
	while(t--)
	{
	    ll l, r, k;
	    cin >> l >> r >> k;
	    if(l == r)
	        cout << "1" << "\n";
	    else
	        cout << k << "\n";
	}
	return 0;
}
