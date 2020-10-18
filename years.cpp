/*
During one of the space missions, humans have found an evidence of previous life at one of the planets. They were lucky enough to find a book with birth and death years of each individual that had been living at this planet. What's interesting is that these years are in the range (1,109)! Therefore, the planet was named Longlifer.

In order to learn more about Longlifer's previous population, scientists need to determine the year with maximum number of individuals that were alive, as well as the number of alive individuals in that year. Your task is to help scientists solve this problem!
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
 int n, cur = 0 ,sum = 0, peo = 0;
 cin >> n;
 map<int,int>mp;
 while(n--)
 {
    int n1,n2;
    cin>>n1>>n2;
    mp[n1]++;
    mp[n2]--;
 }
 
 for(auto it : mp)
 {
    cur += it.second;
    if(cur > sum)
    {
        sum = cur;
        peo = it.first;
    }
 }
 
 cout << peo << " " << sum << endl;
 
 return 0;
}
