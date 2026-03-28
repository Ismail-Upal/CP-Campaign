#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()

const int N = 2e5 + 5;
vector<int> g[N], rumor(N, 0), cnt(N, 0);

void Solve(){
    int n, m, k, t; 
    cin >> n >> m >> k >> t;
    
    for(int i = 0; i < k; i++){
        int x; cin >> x;
        rumor[x] = 1;
    }

    while(m--){
        int u, v; cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
        
        if(rumor[u]) cnt[v]++;
        if(rumor[v]) cnt[u]++;
    }

    queue<int> q;

    for(int i = 1; i <= n; i++){
        if(cnt[i] >= t) q.push(i);
    }

    while(!q.empty()){
        int u = q.front(); q.pop();
        for(auto v : g[u]){    
            if(!rumor[v]){
                if(!rumor[u]){
                    cnt[v]++;
                }
                if(cnt[v] >= t) q.push(v);
            }
        }
        rumor[u] = 1;
    }

    int ans = 0;
    for(int i = 1; i <= n; i++){
        if(rumor[i]) ans++; 
    }
    
    cout << ans;
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