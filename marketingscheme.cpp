/*
You got a job as a marketer in a pet shop, and your current task is to boost sales of cat food. One of the strategies is to sell cans of food in packs with discounts.

Suppose you decided to sell packs with a cans in a pack with a discount and some customer wants to buy x cans of cat food. Then he follows a greedy strategy:

he buys ⌊xa⌋ packs with a discount;
then he wants to buy the remaining (xmoda) cans one by one.
⌊xa⌋ is x divided by a rounded down, xmoda is the remainer of x divided by a.

But customers are greedy in general, so if the customer wants to buy (xmoda) cans one by one and it happens that (xmoda)≥a2 he decides to buy the whole pack of a cans (instead of buying (xmoda) cans). It makes you, as a marketer, happy since the customer bought more than he wanted initially.

You know that each of the customers that come to your shop can buy any number of cans from l to r inclusive. Can you choose such size of pack a that each customer buys more cans than they wanted initially?
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int i, j, l, r, t;
 
int main()
{
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&l, &r);
		if(r >= l+l)
		{
		    puts("NO");
		    continue;
		}
		puts("YES");
	}
}
