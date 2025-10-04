#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
//-------------------------------------------

int32_t main()
{   
    opt();
    
    int n, m; cin >> n >> m;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    map<ll, ll> vis, dis;
    queue<ll> q;
    for(int i = 0; i < n; i++){
        q.push(v[i]);
        vis[v[i]] = 1;
        dis[v[i]] = 0;
    }
    ll sum = 0;
    vector<ll> ans;
    while(!q.empty() and m > 0){
        int u = q.front(); q.pop();
        if(vis.find(u - 1) == vis.end() and m > 0){
            vis[u - 1] = 1;
            q.push(u - 1);
            m--;
            ans.push_back(u - 1);
            dis[u - 1] = dis[u] + 1;
            sum += dis[u - 1];
        }
        if(vis.find(u + 1) == vis.end() and m > 0){
            vis[u + 1] == 1;
            q.push(u + 1);
            m--;
            ans.push_back(u + 1);
            dis[u + 1] = dis[u] + 1;
            sum += dis[u + 1];
        }
    }
    cout << sum << endl;
    for(auto i : ans) cout << i << " ";
    
    return 0;
}