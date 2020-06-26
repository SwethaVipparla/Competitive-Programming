#include<iostream>
using namespace std;

int isPrime(int i)
{
	int j, flag = 1;
	for(j = 2; j < i && flag == 1; j++)
	{
		if(i % j == 0)
			flag = 0;
	}
	return flag;
}

int prime(int n)
{
	int i = n;
	while(i > 1 && !isPrime(i))
		i--;
	return i;
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int ans;
		ans = prime(n);
		cout << ans <<" " << "1\n";
	}
}
