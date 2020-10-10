/*
Mr. Chanek wants to buy a flamingo to accompany his chickens on his farm. Before going to the pet shop, Mr. Chanek stops at an animal festival to have fun. It turns out there is a carnival game with a flamingo as the prize.

There are N mysterious cages, which are numbered from 1 to N. Cage i has Ai (0≤Ai≤103) flamingoes inside (1≤i≤N). However, the game master keeps the number of flamingoes inside a secret. To win the flamingo, Mr. Chanek must guess the number of flamingoes in each cage.

Coincidentally, Mr. Chanek has N coins. Each coin can be used to ask once, what is the total number of flamingoes inside cages numbered L to R inclusive? With L<R.
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, i;
	cin >> n;
	int a[n + 1];
	a[0] = 0;
	
	for(i = 2; i <= n; i++)
	{
		cout << "? 1 " << i << "\n";
		cin >> a[i];
	}
	
	cout << "? 2 " << n << "\n";
	cin >> a[1];
	
	a[1] = a[n] - a[1];
	for(i = n; i >= 2; i--) 
	    a[i] -= a[i - 1];
	    
	cout << "!";
	for(i = 1; i <= n; i++) 
	    cout << " " << a[i];
	    
	cout << "\n";
	
	return 0;
}
