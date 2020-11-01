/*
You are a mayor of Berlyatov. There are n districts and m two-way roads between them. The i-th road connects districts xi and yi. The cost of travelling along this road is wi. There is some path between each pair of districts, so the city is connected.

There are k delivery routes in Berlyatov. The i-th route is going from the district ai to the district bi. There is one courier on each route and the courier will always choose the cheapest (minimum by total cost) path from the district ai to the district bi to deliver products.

The route can go from the district to itself, some couriers routes can coincide (and you have to count them independently).

You can make at most one road to have cost zero (i.e. you choose at most one road and change its cost with 0).

Let d(x,y) be the cheapest cost of travel between districts x and y.

Your task is to find the minimum total courier routes cost you can achieve, if you optimally select the some road and change its cost with 0. In other words, you have to find the minimum possible value of ∑i=1kd(ai,bi) after applying the operation described above optimally.
*/

#include<bits/stdc++.h>
using namespace std;
const int N = 2e3+10;
int e[N],ne[N],h[N],w[N],d[N][N];
bool v[N];
int n,m,k,idx;
struct node
{
  int x,y;
}ver[N];
void add(int a,int b,int c)
{
  e[idx]=b,w[idx]=c,ne[idx]=h[a],h[a]=idx++;
}
void spfa(int s)
{
   memset(d[s],0x3f,sizeof(d[s]));
   memset(v,0,sizeof(v));
   queue<int>q;
   d[s][s]=0;
   q.push(s);
   v[s]=1;
   while(!q.empty())
   {
     int x=q.front();
     q.pop();
     v[x]=0;
     for(int i=h[x];~i;i=ne[i])
     {
         int y=e[i],z=w[i];
       if(d[s][y]>d[s][x]+z)
       {
        d[s][y]=d[s][x]+z;
        if(!v[y])
        {
          v[y]=1;
          q.push(y);
        }
       }
     }
   }
}
int main()
{
    cin>>n>>m>>k;
    memset(h,-1,sizeof(h));
    for(int i=1;i<=m;i++)
    {
      int a,b,c;
      scanf("%d%d%d",&a,&b,&c);
      add(a,b,c);
      add(b,a,c);
    }
    for(int i=1;i<=k;i++)
    {
      int a,b;
      scanf("%d%d",&a,&b);
      ver[i]={a,b};
    }
    for(int i=1;i<=n;i++)
        spfa(i);

    int ans=0x3f3f3f3f;
    for(int i=1;i<=n;i++)
    {
      for(int j=h[i];~j;j=ne[j])
      {
         int tmp=0,b=e[j],a=i;
        for(int z=1;z<=k;z++)
        {
            int x=ver[z].x,y=ver[z].y;
          tmp+=min(d[x][y],min(d[x][a]+d[b][y],d[x][b]+d[a][y]));
        }
        ans=min(ans,tmp);
      }
    }
    cout<<ans;
return 0;
}
