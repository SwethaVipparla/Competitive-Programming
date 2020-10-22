/*
The pandemic is upon us, and the world is in shortage of the most important resource: toilet paper. As one of the best prepared nations for this crisis, BubbleLand promised to help all other world nations with this valuable resource. To do that, the country will send airplanes to other countries carrying toilet paper.

In BubbleLand, there are N toilet paper factories, and N airports. Because of how much it takes to build a road, and of course legal issues, every factory must send paper to only one airport, and every airport can only take toilet paper from one factory.

Also, a road can't be built between all airport-factory pairs, again because of legal issues. Every possible road has number d given, number of days it takes to build that road.

Your job is to choose N factory-airport pairs, such that if the country starts building all roads at the same time, it takes the least amount of days to complete them.
*/

#include <bits/stdc++.h>
using namespace std; 
  
const int maxn = 1e6 + 5;
const int inf = 1e9;
int n, m;
int a[maxn], b[maxn];
 
int main() 
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++) 
    {
	    a[i] = inf;
	    b[i] = inf;
    }
    for (int i = 0; i < m; i++)
    {
	    int u,v,d;
	    cin >> u >> v >> d;
	    a[u] = min(a[u], d);
	    b[v] = min(b[v], d);
    }
 
    int res = 0;
    for (int i = 1; i <= n; i++) 
    {
	    res = max(res, a[i]);
	    res = max(res, b[i]);
    }
 
    if (res == inf) 
      res = -1;
      
    cout << res << endl;
 
    return 0;
}
