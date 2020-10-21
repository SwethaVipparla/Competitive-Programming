/*
There is a building consisting of 10 000 apartments numbered from 1 to 10 000, inclusive.

Call an apartment boring, if its number consists of the same digit. Examples of boring apartments are 11,2,777,9999 and so on.

Our character is a troublemaker, and he calls the intercoms of all boring apartments, till someone answers the call, in the following order:

First he calls all apartments consisting of digit 1, in increasing order (1,11,111,1111).
Next he calls all apartments consisting of digit 2, in increasing order (2,22,222,2222)
And so on.
The resident of the boring apartment x answers the call, and our character stops calling anyone further.

Our character wants to know how many digits he pressed in total and your task is to help him to count the total number of keypresses.

For example, if the resident of boring apartment 22 answered, then our character called apartments with numbers 1,11,111,1111,2,22 and the total number of digits he pressed is 1+2+3+4+1+2=13.

You have to answer t independent test cases.
*/

#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	cin >> t;
  
	while (t--) 
  {
		string n;
		cin >> n;
    
		int p[5] = {0, 1, 3, 6, 10}, ans;
		ans = p[4] * (n[0] - '1');
		ans += p[n.size()];
		cout << ans << "\n";
	}
	return 0;
}
 
 
 
 
