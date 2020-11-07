/*
Danik urgently needs rock and lever! Obviously, the easiest way to get these things is to ask Hermit Lizard for them.

Hermit Lizard agreed to give Danik the lever. But to get a stone, Danik needs to solve the following task.

You are given a positive integer n, and an array a of positive integers. The task is to calculate the number of such pairs (i,j) that i<j and ai & aj≥ai⊕aj, where & denotes the bitwise AND operation, and ⊕ denotes the bitwise XOR operation.

Danik has solved this task. But can you solve it?


*/


#include<bits/stdc++.h>
using namespace std;
#define ll long long

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
		ll ans = 0;
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
