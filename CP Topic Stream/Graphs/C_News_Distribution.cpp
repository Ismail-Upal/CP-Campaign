#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
const int N = 5e5 + 5;
vector<int> g[N];
bool vis[N];
int Size[N];

int main()
{   
    opt();
    
    int n, m; cin >> n >> m;

    while(m--){
        int k; cin >> k;
        int u;
        vector<int> v(k);
        for(int i = 0; i < k; i++){
            cin >> v[i];
        }
        for(int i = 0; i < k - 1; i++){
            g[v[i]].push_back(v[i + 1]);
            g[v[i + 1]].push_back(v[i]);
        }
    }

    for(int i = 1; i <= n; i++){
        if(!vis[i]){
            vector<int> comp;
            comp.push_back(i);
            queue<int> q;
            q.push(i); vis[i] = 1;
            int ans = 1;
            while(!q.empty()){
                int u = q.front(); q.pop();
                for(auto v : g[u]){
                    if(!vis[v]){
                        q.push(v);
                        vis[v] = 1;
                        comp.push_back(v);
                        ans++;
                    }
                }
            }
            for(auto i : comp) Size[i] = ans;
        }
    }

    for(int i = 1; i <= n; i++) cout << Size[i] << " ";
    
    return 0;
}