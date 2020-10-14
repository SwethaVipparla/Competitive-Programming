#include<bits/stdc++.h>
using namespace std;

int main ()
{
	int t, n;
	cin >> t;
	string s;
	while(t--) 
	{
	    int count1 = 1, count2 = 0, i;
		cin >> n >> s;
		for(i = 1; i < n; i++) 
		{
			if(s[i] != s[i-1]) 
			    count1++;
			else 
				count2 = min(++count2, count1);
		}
		cout << (count2 + count1 + 1)/2 << "\n";
	}
}
