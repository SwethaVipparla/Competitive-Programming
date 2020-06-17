#include <bits/stdc++.h>
using namespace std;
#define ll long int
int main()
{
	ll t;
	cin >> t;
	while(t--)
	{
		string s;
		ll d, i;
		cin >> d >> s;
		ll arr[7];
		if(s == "mon") 
		{
			arr[0] = arr[1] = arr[2] = arr[3] = arr[4] = arr[5] = arr[6] = 4;
			for(i = 0; i < d - 28; i++)
				arr[i]++;
		}
		else if(s == "tues")
		{
			arr[0] = arr[1] = arr[2] = arr[3] = arr[4] = arr[5] = arr[6] = 4;
			for(i = 0; i < d - 28; i++)
				arr[i+1]++;
		}
		else if(s == "wed")
       {
		    arr[0] = arr[1] = arr[2] = arr[3] = arr[4] = arr[5] = arr[6] = 4;
			    for(i = 0; i < d - 28; i++)
					arr[i+2]++;
		}
		else if(s == "thurs")
		{
		    arr[0] = arr[1] = arr[2] = arr[3] = arr[4] = arr[5] = arr[6] = 4;
			for(i = 0; i < d - 28; i++)
					arr[i+3]++;
		}
		else if(s=="fri") 
		{
			arr[0] = arr[1] = arr[2] = arr[3] = arr[4] = arr[5] = arr[6] = 4;
			for(i = 0; i < d - 28; i++)
			{
				if(i + 4 >= 7)
					arr[i+4-7]++;
				else 
					arr[i+4]++;
			}
		}
		else if(s == "sat") 
		{
			arr[0] = arr[1] = arr[2] = arr[3] = arr[4] = arr[5] = arr[6] = 4;
			for(i = 0; i < d - 28; i++)
			{
				if(i + 5 >= 7)
					arr[i+5-7]++;
				else 
					arr[i+5]++;
		    }
		}
		else if( s== "sun")
		{
			arr[0] = arr[1] = arr[2] = arr[3] = arr[4] = arr[5] = arr[6] = 4;
			for(i = 0; i < d - 28; i++)
			{
				if(i + 6 >= 7)
			        arr[i+6-7]++;
				else
					arr[i+6]++;
			}
		}
			for(i = 0; i < 7; i++)
				cout << arr[i] << " ";
			cout << "\n";
	}
	return 0;
}
