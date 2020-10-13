/*
You are given an array of n integers a1,a2,…,an.

You have to create an array of n integers b1,b2,…,bn such that:

The array b is a rearrangement of the array a, that is, it contains the same values and each value appears the same number of times in the two arrays. In other words, the multisets {a1,a2,…,an} and {b1,b2,…,bn} are equal.
For example, if a=[1,−1,0,1], then b=[−1,1,1,0] and b=[0,1,−1,1] are rearrangements of a, but b=[1,−1,−1,0] and b=[1,0,2,−3] are not rearrangements of a.

For all k=1,2,…,n the sum of the first k elements of b is nonzero. Formally, for all k=1,2,…,n, it must hold
b1+b2+⋯+bk≠0.
If an array b1,b2,…,bn with the required properties does not exist, you have to print NO.
*/


#include <bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long ll;
int a[55];

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n;
        cin >> n;
        int sum = 0;
        for (int i = 1; i <= n; i++) 
        {
            cin >> a[i];
            sum += a[i];
        }
        if (sum == 0) 
        {
            cout << "NO\n";
        }
        else 
        {
            cout << "YES\n";
            sort(a + 1, a + n + 1);
            if (sum > 0) 
                reverse(a + 1, a + n + 1);
            for (int i = 1; i <= n; i++) 
                cout << a[i] << " ";
            cout << '\n';
        }
    }
}
