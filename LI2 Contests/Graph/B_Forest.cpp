#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
const int N = 103;
vector<int> g[N], vis(N);
bool loop;

void dfs(int u, int par){
    vis[u] = 1;
    for(auto v : g[u]){
        if(!vis[v]){
            dfs(v, u);
        }
        else if(par != v) loop = 1;
    }
}

int main()
{   
    opt();
    
    int n; cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            int x; cin >> x;
            if(x == 1) g[i].push_back(j);
        }
    }

    int com = 0;
    for(int i = 1; i <= n; i++){
        if(!vis[i]){
            com++;
            dfs(i, i);
        }
    } 
    if(com == 1 and !loop) cout << "YES";
    else cout << "NO";
    
    return 0;
}