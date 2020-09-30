#include <bitc\stdc++.h>
using namespace std;
 
set <long long> s;
 
long long t,n,x,c,ans;
 
long long read () 
{
	long long k = 0, f = 1;
	char c = getchar ();
	while (c < '0'|| c > '9') 
	{
	    if (c == '-') 
	       f = - 1;
	    c=getchar ();
	}
	while (c >= '0' && c <= '9') 
	{
	    k = k * 10 + c - '0';
	    c = getchar();
	}
	return k * f;
}
 
int main () 
{
	n = read ();
	s.insert (0);
	while (n--) 
	{
		x = read();
		c += x;
		if (s.count(c) != 0) 
		{
			s.clear();
			s.insert(0);
			s.insert(x);
			c = x;
			ans++; 
		}
		s.insert (c);
	}
	printf ("%d\n",ans);
	return 0;
}
