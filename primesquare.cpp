/*
Sasha likes investigating different math objects, for example, magic squares. But Sasha understands that magic squares have already been studied by hundreds of people, so he sees no sense of studying them further. Instead, he invented his own type of square — a prime square.

A square of size n×n is called prime if the following three conditions are held simultaneously:

all numbers on the square are non-negative integers not exceeding 105;
there are no prime numbers in the square;
sums of integers in each row and each column are prime numbers.
Sasha has an integer n. He asks you to find any prime square of size n×n. Sasha is absolutely sure such squares exist, so just help him!
*/

#include <bits/stdc++.h>

using namespace std;

int n;
int main()
{
	int t;
	scanf("%d",&t);
	
	while(t--)
	{
		scanf("%d", &n);
		for(int i = 1; i <= n; i++, puts(""))
		{
			for(int j = 1; j <= n; j++)
			{
				if(abs(i - j) <=1 ) 
				    printf("1 ");
				else 
				    printf("0 ");
			}
		}
	}
	return 0;
}
