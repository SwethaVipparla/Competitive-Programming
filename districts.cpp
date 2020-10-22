/*
There are n districts in the town, the i-th district belongs to the ai-th bandit gang. Initially, no districts are connected to each other.

You are the mayor of the city and want to build n−1 two-way roads to connect all districts (two districts can be connected directly or through other connected districts).

If two districts belonging to the same gang are connected directly with a road, this gang will revolt.

You don't want this so your task is to build n−1 two-way roads in such a way that all districts are reachable from each other (possibly, using intermediate districts) and each pair of directly connected districts belong to different gangs, or determine that it is impossible to build n−1 roads to satisfy all the conditions.

You have to answer t independent test cases.
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{	
	int t,vn;
	cin >> t;
	while(t--)
	{
		int n ;
		cin >> n ;
    
		int last = -1 ;
		vector<pair<int, int>> ans;
		vector<int> a(n);
    
		for(int i = 0 ; i < n ; i++)
		{
			cin >> a[i] ;
			if(i > 0 && a[i] != a[0])
			{
				last = i + 1;
				ans.push_back({1, i+1});
			}
		}
    
		if(last == -1)
		{
			cout << "NO\n";
			continue;
		}
		cout << "YES\n";
    
		for(int i = 1 ; i < n ; i++)
			if(a[i] == a[0])
				ans.push_back({i+1, last});
		
		for(auto x : ans)
			cout << x.first << " " << x.second << "\n";
		}
}
