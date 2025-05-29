#include<bits/stdc++.h>
using namespace std;
const int N = 1e5;
int parent[N];
void make(int v){
    parent[v] = v;
}

int find(int v){
    if(v == parent[v]) return v;
    return find(parent[v]);
}

void Union(int u, int v){
    u = find(u);
    v = find(v);
    if(u != v){
        parent[v] = u;
    }
}
int32_t main()
{   
    
    
    return 0;
}