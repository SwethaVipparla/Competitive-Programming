#include <iostream>
using namespace std;
#define ll long long int

ll pow (int x, unsigned int y)
{
    ll temp;
    if(y == 0)
        return 1;
    temp = pow(x, y / 2);
    if (y % 2 == 0)
        return temp * temp;
    else
        return x * temp * temp;
}

int main()
{	
  int t;
	ll n, arr[50];
	arr[0] = 0;
	ll d = 0; 
	for(int i = 1; i <= 25; i++)
	{
		d = 2*(d) + pow(-1, i + 1) * 1;
		arr[i] = d;		
	}
	cin >> t;	
	while(t--)
	{
		cin >> n;
		cout << " " << arr[n] << " " << pow(2, n);
	}	
	return 0;
}
