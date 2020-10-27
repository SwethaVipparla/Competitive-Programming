/*
For a given array a consisting of n integers and a given integer m find if it is possible to reorder elements of the array a in such a way that ∑ni=1∑nj=iajj equals m? It is forbidden to delete elements as well as insert new elements. Please note that no rounding occurs during division, for example, 52=2.5.
*/

#include<bits/stdc++.h>

using namespace std;
 
int main()
{
   int t;
   scanf("%d",&t);
   while(t--)
   {
   	long long n, i, j, m, sum = 0, a[110];
   	scanf("%lld %lld", &n, &m);
   	
   	for(i = 1; i <= n;i++)
   	{
   		scanf("%lld", &a[i]);
   		sum += a[i];
   	}
   	if(sum == m)
   	    printf("YES\n");
   	else 
   	    printf("NO\n");
   }
   
   return 0;
}
