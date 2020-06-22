#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, t, b, m, count, count2, i, d;
    cin >> t;
    while(t--)
    {
        cin >> n >> b >> m;
        count = 1;
        int arr[m];
        for(i = 0;i < m; i++)
            cin >> arr[i];
        count2 = arr[0] / b;
        for(i = 1; i < m ; i++)
        {
            d = arr[i] / b;
            if(count2 == d)
                continue;
            else
            {
                count++;
                count2 = d;
            }
        }
        cout << count << "\n";
    }
    return 0;
}
