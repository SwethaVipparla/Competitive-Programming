#include <bits/stdc++.h>
 
using namespace std ;
 
const int MAX = 1e5 + 5 ;
 
int n ;
int arr[MAX] ;
 
int main()
{
	int t ;
	cin >> t ;
	while(t--)
	{
		cin >> n ;
		for(int i = 0 ; i < n ; i++)
			cin >> arr[i] ;
		int ans = 0 , prv = -1 ;
		for(int i = 0 ; i < n ; i++)
		{
			if(!arr[i])
				continue ;
			if(prv != -1)
				ans += i - prv - 1 ;
			prv = i ;
		}
		cout << ans <<"\n" ;
	}
	return 0 ;
}
