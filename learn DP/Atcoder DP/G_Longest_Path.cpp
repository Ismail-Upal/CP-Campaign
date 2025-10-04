// recursive
// #include<bits/stdc++.h>
// using namespace std;
// const int N = 1e5 + 3;
// int n, m, dis[N];
// vector<int> g[N];

// int dfs(int u){
//     if(dis[u] != -1) return dis[u];
//     int ans = 0;
//     for(int v : g[u]){
//         ans = max(ans, dfs(v) + 1);
//     }
//     return dis[u] = ans;
// }
// int32_t main()
// {   
//     cin >> n >> m;
//     while(m--){
//         int u, v; cin >> u >> v;
//         g[u].push_back(v);
//     }
    
//     memset(dis, -1, sizeof dis);
//     int ans = 0;
//     for(int i = 1; i <= n; i++){
//         ans = max(ans, dfs(i));
//     }

//     cout << ans ;

//     return 0;
// }

// iterative----------------------------------------------
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e5 + 4;
vector<int> g[N];
int indeg[N];

int main()
{   
    int n, m; cin >> n >> m;
    while(m--){
        int u, v; cin >> u >> v;
        g[u].push_back(v);
        indeg[v]++;
    }
    
    queue<int> q;
    vector<int> dp(n + 1, 0);

    for(int i = 1; i <= n; i++){
        if(indeg[i] == 0) q.push(i);
    }

    while(!q.empty()){
        int u = q.front(); q.pop();
        int ans = 0;
        for(int v : g[u]){
            dp[v] = max(dp[v], dp[u] + 1);
            indeg[v]--;
            if(indeg[v] == 0) q.push(v);
        }
    }

    int ans = *max_element(dp.begin(), dp.end());
    cout << ans; 

    return 0;
}

// TC = S (1 + T)
// S = number of states = n
// T = number of transition = k
// TC = (n + m) (1 + 1)
    // = O (n + m)