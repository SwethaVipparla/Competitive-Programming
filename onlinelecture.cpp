#include <bits/stdc++.h>
using namespace std;

int solve(int arr[], int n, int m)
{
    if(n == 0 && m != 0)
        return 0;
    if(m == 0)
        return 1;
    if(arr[n - 1] > m)
        return solve(arr, n - 1, m);
    return (solve(arr, n - 1, m) + solve(arr, n - 1, m - arr[n - 1]));
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
    	int n, m, i;
    	cin >> n;
    	cin >> m;
    	int arr[n];
    	for(i = 0;i < n; i++)
    		cin >> arr[i];
    	cout << solve (arr, n, m) << "\n";
    }
}
