#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        int n;
        cin >> n;
        int arr[n];
        int i;
        for(i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr, arr + n);
        int x, y, z;
        x = n / 4;
        y = 2 * x;
        z = 3 * x;
        if(arr[x - 1] == arr[x] || arr[y - 1] == arr[y] || arr[z - 1] == arr[z])
            cout << -1 << endl;
        else
            cout << arr[x] << " " << arr[y] << " " << arr[z] << endl;
    }
}
