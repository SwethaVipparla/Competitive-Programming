/*
Boboniu gives you

r red balls,
g green balls,
b blue balls,
w white balls.
He allows you to do the following operation as many times as you want:

Pick a red ball, a green ball, and a blue ball and then change their color to white.
You should answer if it's possible to arrange all the balls into a palindrome after several (possibly zero) number of described operations.
*/


#include<bits/stdc++.h>

#define ll long long

using namespace std;

int n,t,a,b,c,d;
 
int main()
{
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d %d %d %d", &a, &b, &c, &d);
		if(a%2 + b%2 + c%2 + d%2 <= 1)\
		{
		    puts("Yes");
		    continue;
		}
		if(a%2 + b%2 + c%2 + d%2 >= 3 && a>0 && b>0 && c>0)
		{
		    puts("Yes");
		    continue;
		}
		puts("No");
	}
}
