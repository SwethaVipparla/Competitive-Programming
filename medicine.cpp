#include<bits/stdc++.h>
using namespace std;
int main()
{	
	int t;
	cin >> t;
	while(t--)
	{
	    int m, y, d;
	    char c;
	    cin >> y >> c >> m >> c >> d;
	    int a[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	    if(y % 4 == 0 && y % 100 != 0)
	        a[1] += 1;
	    else if(y % 400 == 0)
	        a[1] += 1;
	    m -= 1;
	    if(a[m] % 2 != 0)
	        cout << ((a[m] - d) / 2 + 1) << "\n";
	    else
	    {
	        int da = (a[m] - d) / 2 + 1;
	        if(d % 2 == 0)
	            da += 15;
	        else
	            da += 16;
	        cout << da << "\n";
	    }
	}
	return 0;
}
