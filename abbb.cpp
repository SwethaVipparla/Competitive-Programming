/*
Zookeeper is playing a game. In this game, Zookeeper must use bombs to bomb a string that consists of letters 'A' and 'B'. He can use bombs to bomb a substring which is either "AB" or "BB". When he bombs such a substring, the substring gets deleted from the string and the remaining parts of the string get concatenated.

For example, Zookeeper can use two such operations: AABABBA → AABBA → AAA.

Zookeeper wonders what the shortest string he can make is. Can you help him find the length of the shortest string?
*/

#include <bits/stdc++.h>
 
using namespace std;
 
const int MAX = 200005;
 
int t,n,top;
 
char s[MAX];
char S[MAX];
 
int main()
{
	scanf("%d",&t);
	while (t--)
	{
	    int i;
		scanf("%s",s + 1);
		n = strlen(s + 1);
		top = 0;
		for (i = 1; i <= n; i++)
		{
			if (s[i] == 'A')
				S[++top] = 'A';
			else
			{
				if (top >= 1 && S[top] == 'A')
					top--;
				else
					S[++top] = 'B';
			}
		}
		n = top;
		for (i = 1;i <= top;i++)
			s[i] = S[i];
		top = 0;
		for (i = 1;i <= n;i++)
		{
			if (s[i] == 'A')
				S[++top] = 'A';
			else
			{
				if (top >= 1 && S[top] == 'B')
					top--;
				else
					S[++top] = 'B';
			}
		}
		printf("%d\n",top);
	}
	return 0;
}
