#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int n;
    cin >> n;
    int a[n][2], i, count = 0;
    for(i = 0; i < n ;i++)
        cin >> a[i][0] >> a[i][1];
    for(i = 0; i < n; i++)
    {
        if(i != 0 && (a[i-1][0] < (a[i][0] - a[i][1])))
            count++;
        else if((i < n-1 && (a[i+1][0] > (a[i][0] + a[i][1]))) || i == n-1)
        {
            a[i][0] = a[i][0] + a[i][1];
            count++;
            if(i == 0)
                continue;
        }
        if(i == 0)
            count++;
    }
    cout << count << "\n";
    return 0;
}
