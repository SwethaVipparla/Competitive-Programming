/*
You have a string s consisting of n characters. Each character is either 0 or 1.

You can perform operations on the string. Each operation consists of two steps:

select an integer i from 1 to the length of the string s, then delete the character si (the string length gets reduced by 1, the indices of characters to the right of the deleted one also get reduced by 1);
if the string s is not empty, delete the maximum length prefix consisting of the same characters (the indices of the remaining characters and the string length get reduced by the length of the deleted prefix).
Note that both steps are mandatory in each operation, and their order cannot be changed.

For example, if you have a string s= 111010, the first operation can be one of the following:

select i=1: we'll get 111010 → 11010 → 010;
select i=2: we'll get 111010 → 11010 → 010;
select i=3: we'll get 111010 → 11010 → 010;
select i=4: we'll get 111010 → 11110 → 0;
select i=5: we'll get 111010 → 11100 → 00;
select i=6: we'll get 111010 → 11101 → 01.
You finish performing operations when the string s becomes empty. What is the maximum number of operations you can perform?
*/

#include<bits/stdc++.h>
using namespace std;

int main ()
{
	int t, n;
	cin >> t;
	string s;
	while(t--) 
	{
	    int count1 = 1, count2 = 0, i;
		cin >> n >> s;
		for(i = 1; i < n; i++) 
		{
			if(s[i] != s[i-1]) 
			    count1++;
			else 
				count2 = min(++count2, count1);
		}
		cout << (count2 + count1 + 1)/2 << "\n";
	}
}
