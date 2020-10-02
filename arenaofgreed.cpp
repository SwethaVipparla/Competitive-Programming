#include <bits/stdc++.h>
using namespace std;
 
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    long long n, ans = 0;
    int count = 0;
    cin >> n;
    while (n)
    {
      count++;
      if ((n & 1) || (n > 4 && n % 4 == 0))
      {
        if (count & 1) 
            ans++;
        n--;
      } 
      else 
      {
        if (count & 1) 
            ans += (n>>1);
        n>>=1;
      }
    }
    printf("%lld\n",ans);
  }
}
