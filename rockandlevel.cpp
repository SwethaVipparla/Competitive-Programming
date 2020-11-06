#include<bits/stdc++.h>
using namespace std;
#define LL long long

const int Maxn=33;
const int inf=2147483647;

int read()
{
	int x=0,f=1;
  char ch = getchar();
	while(ch<'0'||ch>'9')
  {
    if(ch == '-')
      f = -1;
      ch=getchar();
  }
	while(ch >= '0' && ch <= '9')
    x = x*10+ch-'0',ch = getchar();
	return x*f;
}

int c[Maxn],n,a[100010];
int main()

{
	int t = read();
	while(t--)
	{
		LL ans = 0;
		n = read();
		for(int i = 0;i < 33;i++)
      c[i] = 0;
		for(int i = 1;i <= n;i++)
      a[i] = read();
		for(int i = n;i;i--)
		{
			for(int j = 31;j >= 0; j--)
			if((1<<j)&a[i])
			{
				ans += c[j];
				c[j]++;
				break;
			}
		}
		printf("%lld\n",ans);
	 } 
}
