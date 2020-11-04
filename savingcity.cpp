/*
Bertown is a city with n buildings in a straight line.

The city's security service discovered that some buildings were mined. A map was compiled, which is a string of length n, where the i-th character is "1" if there is a mine under the building number i and "0" otherwise.

Bertown's best sapper knows how to activate mines so that the buildings above them are not damaged. When a mine under the building numbered x is activated, it explodes and activates two adjacent mines under the buildings numbered x−1 and x+1 (if there were no mines under the building, then nothing happens). Thus, it is enough to activate any one mine on a continuous segment of mines to activate all the mines of this segment. For manual activation of one mine, the sapper takes a coins. He can repeat this operation as many times as you want.

Also, a sapper can place a mine under a building if it wasn't there. For such an operation, he takes b coins. He can also repeat this operation as many times as you want.

The sapper can carry out operations in any order.

You want to blow up all the mines in the city to make it safe. Find the minimum number of coins that the sapper will have to pay so that after his actions there are no mines left in the city.
*/


#include <bits/stdc++.h>
#define ll long long int
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll a, b, cost = 0, i, n = 0;
        string s;
        cin >> a >> b >> s;

        for(i = 0; i < s.size(); i++)
        {
            if(s[i] == '1')
                break;
        }
        
        if(i == s.size())
        {
            cout << 0 << '\n';
            continue;
        }
        
        cost = a;
        for(; i < s.size(); i++)
        {
            if(s[i] == '0')
                n ++;
            else
            {
                cost += min(a, b*n);
                n = 0;
            }
        }
 
        cout << cost << '\n';
 
    }
    return 0;
}
