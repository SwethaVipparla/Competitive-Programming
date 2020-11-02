/*
Monocarp had a tree which consisted of n vertices and was rooted at vertex 1. He decided to study BFS (Breadth-first search), so he ran BFS on his tree, starting from the root. BFS can be described by the following pseudocode:

a = [] # the order in which vertices were processed
q = Queue()
q.put(1) # place the root at the end of the queue
while not q.empty():
    k = q.pop() # retrieve the first vertex from the queue
    a.append(k) # append k to the end of the sequence in which vertices were visited
    for y in g[k]: # g[k] is the list of all children of vertex k, sorted in ascending order
        q.put(y)
Monocarp was fascinated by BFS so much that, in the end, he lost his tree. Fortunately, he still has a sequence of vertices, in which order vertices were visited by the BFS algorithm (the array a from the pseudocode). Monocarp knows that each vertex was visited exactly once (since they were put and taken from the queue exactly once). Also, he knows that all children of each vertex were viewed in ascending order.

Monocarp knows that there are many trees (in the general case) with the same visiting order a, so he doesn't hope to restore his tree. Monocarp is okay with any tree that has minimum height.

The height of a tree is the maximum depth of the tree's vertices, and the depth of a vertex is the number of edges in the path from the root to it. For example, the depth of vertex 1 is 0, since it's the root, and the depth of all root's children are 1.

Help Monocarp to find any tree with given visiting order a and minimum height.
*/

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
