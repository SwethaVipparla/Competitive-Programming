#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	cin >> t;
	while(t--)
	{
	    int n, c, d, i, flag = 0;
	  
	    cin >> n;
	    
	    int a[n], b[n];
	    
	    for(i = 0; i < n; i++)
	        cin >> b[i];
	        
	     for(i = 0; i < n; i++)
	    {
	        if((i + 1) % b[i] == 0)
	            flag = 1;
	        else
	        {
	            flag = 0;
    	        break;
	        }
	    }
	    if(flag == 1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    
	return 0;
}
