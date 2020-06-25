#include <iostream>
using namespace std;

int main() 
{
	int t;
	cin >> t;
	while(t--)
	{
	    int n, i;
	    cin>>n;
	    int a[n];
	    a[0] = {0};
	    a[1] = {0};
	    for(i = 2; i < n; i++)
	    {
	        int count=0, num, j;
	        for(j = i - 2; j >= 0; j--)
	        {
	            if(a[i - 1] == a[j])
	            {
	                count++;
	                num = j;
	                break;
	            }
	        }
	        if(count != 0)
	            a[i] = i - 1 - num;
	        else
	            a[i] = 0;
	    }
	    int count2 = 1;
	    for(i = n - 2; i >= 0; i--)
	    {
	        if(a[n - 1] == a[i])
	            count2++;
	    }
	    cout << count2 << "\n";
	}
	return 0;
}
