#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        n--;
        ll bit = 1, nib = 0, byte = 0;
        while(n)
        {
            if(bit and n >= 2)
            {
                n -= 2;
                nib = bit;
                bit = 0;
            }
            else if(nib and n >= 8)
            {
                n -= 8;
                byte = nib;
                nib = 0;
            }
            else if(byte and n >= 16)
            {
                n -= 16;
                bit = 2 * byte;
                byte = 0;
            }
            else
                break;
        }
        cout << bit << " " << nib << " " << byte << "\n";
    }
}
