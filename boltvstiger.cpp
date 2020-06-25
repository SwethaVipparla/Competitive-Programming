#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	cin >> t;
	double end ,dis ,acc, sp;
	while(t--)
	{
	    cin >> end >> dis >> acc >> sp;
	    double tb = 0, tt = 0;
	    tb = end / sp;
	    tt = pow(((2 * (end + dis)) / acc), (0.5));
	    if(tt > tb)
	        cout << "Bolt\n";
	    else 
	        cout << "Tiger\n";
	}
	return 0;
}
