#include <bits/stdc++.h>
using namespace std;
#define ll lomg long int

int main()
{

  ll t;
  cin >> t;
  while(t--)
  {
    ll n, i;
    cin >> n;
    string str;
    cin >> str;
    char c[11];
    for(i = 1; i < 11; i++)
        c[i] = str[i - 1];
    for(i = 0; i < n - 1; i++)
    {
        string str2;
        cin >> str2;
        for(int j = 1; j < 11; j++)
        {
            if(str2[j - 1] == '1' && c[j] == '1')
                c[j] = '0';
            else if(str2[j - 1] == '0' && c[j] == '1')
                c[j] = '1';
            else if(str2[j - 1] == '1' && c[j] == '0')
                c[j] = '1';
        }
    }
    ll count = 0;
    for(i = 1; i < 11; i++)
         if(c[i] == '1')
             count++;
    cout << count << "\n";
  }
  return 0;
}
