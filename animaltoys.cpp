/*
Chaneka has a hobby of playing with animal toys. Every toy has a different fun value, a real number. Chaneka has four boxes to store the toys with specification:

The first box stores toys with fun values in range of (−∞,−1].
The second box stores toys with fun values in range of (−1,0).
The third box stores toys with fun values in range of (0,1).
The fourth box stores toys with fun value in range of [1,∞).
Chaneka has A, B, C, D toys in the first, second, third, and fourth box, respectively. One day she decides that she only wants one toy, a super toy. So she begins to create this super toy by sewing all the toys she has.

While the number of toys Chaneka has is more than 1, she takes two different toys randomly and then sews them together, creating a new toy. The fun value of this new toy is equal to the multiplication of fun values of the sewn toys. She then puts this new toy in the appropriate box. She repeats this process until she only has one toy. This last toy is the super toy, and the box that stores this toy is the special box.

As an observer, you only know the number of toys in each box initially but do not know their fun values. You also don't see the sequence of Chaneka's sewing. Determine which boxes can be the special box after Chaneka found her super toy.
*/


#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    ll t, a, b, c, d, i, j, k, no, n, m, x, y;
    cin >> t;
    while(t--)
    {
        cin >> a >> b >> c >> d;
        
        string s1 = "Tidak", s2 = "Tidak", s3 = "Tidak", s4 = "Tidak";
        
        no = a + b;
        if(no % 2 != 0 && a + d > 0)
            s1 = "Ya";
        if(no % 2 != 0 && b + c > 0)
            s2 = "Ya";
        if(no % 2 == 0 && b + c > 0)
            s3 = "Ya";
        if(no % 2 == 0 && a + d > 0)
            s4 = "Ya";
            
        cout << s1 << " " << s2 << " " << s3 << " " << s4 << "\n";
    }
}
