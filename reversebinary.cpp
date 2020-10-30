/*
You are given a string s of even length n. String s is binary, in other words, consists only of 0's and 1's.

String s has exactly n2 zeroes and n2 ones (n is even).

In one operation you can reverse any substring of s. A substring of a string is a contiguous subsequence of that string.

What is the minimum number of operations you need to make string s alternating? A string is alternating if si≠si+1 for all i. There are two types of alternating strings in general: 01010101... or 10101010...
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, c = 0; 
        string s;
        
        cin >> n;
        cin >> s;
        
        for(int i = 1; i < n; i++)
            if(s[i-1] == s[i])
                c++;
        if(s[n-1]==s[0])
            c++;
            
        printf("%d\n", c/2);
    }
    return 0;
}
