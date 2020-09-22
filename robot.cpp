#include <bits/stdc++.h>

using namespace std;


int main()
{
    int x, y, a, b;
    cin >> x >> y;
    cin >> a >> b;
 
    printf("%d", max( abs(x - a), abs(y - b) ));
 
    return 0;
}
