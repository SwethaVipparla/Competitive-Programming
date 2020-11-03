/*
You are given two arrays a and b, each consisting of n positive integers, and an integer x. Please determine if one can rearrange the elements of b so that ai+bi≤x holds for each i (1≤i≤n).

Input
The first line of input contains one integer t (1≤t≤100) — the number of test cases. t blocks follow, each describing an individual test case.

The first line of each test case contains two integers n and x (1≤n≤50; 1≤x≤1000) — the length of arrays a and b, and the parameter x, described in the problem statement.

The second line of each test case contains n integers a1,a2,…,an (1≤a1≤a2≤⋯≤an≤x) — the elements of array a in non-descending order.

The third line of each test case contains n integers b1,b2,…,bn (1≤b1≤b2≤⋯≤bn≤x) — the elements of array b in non-descending order.

Test cases are separated by a blank line.

Output
For each test case print Yes if one can rearrange the corresponding array b so that ai+bi≤x holds for each i (1≤i≤n) or No otherwise.

Each character can be printed in any case.
*/


#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, x, a[56], b[56], i;
        bool dap = 1;
        cin >> n >> x;

        for(i = 0; i < n; i++)
            cin >> a[i];

        for(i = 0; i < n; i++)
            cin>>b[i];
        
        for(i = 0; i < n; i++)
        {
            if(a[i] + b[n-1-i] > x)
             dap = 0;
        }
    cout << (dap? "Yes" : "No") << '\n';
    }
}
