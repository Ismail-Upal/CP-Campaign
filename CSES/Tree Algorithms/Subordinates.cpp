#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()

const int N = 2e5 + 3;
vector<int> g[N], subs(N, 0);

int dfs(int u, int p){
    int cnt = 0;
    for(int v : g[u]){
        if(v != p){
            cnt += dfs(v, u) + 1 ;
        }
    }

    return subs[u] = cnt;
}

void Solve(){
    int n; cin >> n;
    for(int i = 2; i <= n; i++){
        int u; cin >> u;
        g[u].push_back(i);
        g[i].push_back(u);
    }

    subs[1] = dfs(1, -1);
    for(int i = 1; i <= n; i++) cout << subs[i] << " "; 
}

int main()
{   
    fast;
    int t = 1;
    // cin >> t;
    for(int i = 1; i <= t; i++){
        Solve();
    }
    
    return 0;
}