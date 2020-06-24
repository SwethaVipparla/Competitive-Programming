#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, i;
        cin >> n;
        int arr[n];
        for(i = 0; i < n; i++)
            cin >> arr[i];
        for(i = 0; i < n; i++)
        {
            if(arr[i + 2] == arr[i] + 2 && i + 2 < n)
            {
                cout << arr[i] << "...";
                while(i + 1 < n && arr[i + 1] == arr[i] + 1)
                    i++;
                cout << arr[i];
            }
            else 
                cout << arr[i];
            if(i != n - 1)
                cout << ",";
        }
        cout << "\n";
    }
	return 0;
}
