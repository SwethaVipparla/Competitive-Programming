/*
Numbers 1,2,3,…n (each integer from 1 to n once) are written on a board. In one operation you can erase any two numbers a and b from the board and write one integer a+b2 rounded up instead.

You should perform the given operation n−1 times and make the resulting number that will be left on the board as small as possible.

For example, if n=4, the following course of action is optimal:

choose a=4 and b=2, so the new number is 3, and the whiteboard contains [1,3,3];
choose a=3 and b=3, so the new number is 3, and the whiteboard contains [1,3];
choose a=1 and b=3, so the new number is 2, and the whiteboard contains [2].
It's easy to see that after n−1 operations, there will be left only one number. Your goal is to minimize it.
*/

#include<bits/stdc++.h>
 
using namespace std;
 
#define ll long long
 
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    ll t;
    cin >> t;
 
    while(t--)
    {
       ll n;
       cin >> n;
 
      cout << "2" << endl;
 
      ll k = n - 1;
      ll a1 = n, a2 = n - 1;
 
      while(k--)
      {
          cout << a2 << " " << a1 << endl;
          ll hel = a1 + a2;
          a1 = hel / 2;
 
          if(hel % 2 != 0)
            a1++;
          a2--;
      }
    }
    return 0;
}
