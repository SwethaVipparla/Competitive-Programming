#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,an=1,pre=1,sm=0,cn=0,req=0;cin>>n;
        vector<ll> ls(n);
        for(ll &x:ls) cin>>x;
        for(ll u=1;u<n-1;u++){
        if(ls[u]>ls[u+1]) cn++;
        req++;
        if(sm<cn) an++,sm+=req,req=0;}
        cout<<an;
        puts("");
    }
}
