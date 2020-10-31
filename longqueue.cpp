#include<iostream>
using namespace std;

int main()
{
    int T,n,a[101],k,l,t,flag;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        flag=1;
        cin>>n;
        for(int j=1;j<=n;j++)
        {
            cin>>a[j];
        }
       k=1;
       while(k<=n)
       {
           if(a[k]==1)
           {
               l=k+1;
               t=1;
               while(t<=5 && l<=n)
               {
                   if(a[l]==1)
                   {
                       cout<<"NO"<<endl;
                       flag=0;
                       break;
                   }
                   l++;
                   t++;
                   if(l>n)
                   {
                       cout<<"YES"<<endl;
                       flag=2;
                       break;
                   }
               }
               k=k+6;
           }
           else{
            k++;
           }
           if(flag ==0 || flag==2)
            break;

       }
