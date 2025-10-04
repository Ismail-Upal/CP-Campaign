#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
//-------------------------------------------
const int N = 1003;
vector<int> g[N];
bool vis[N];
map<int, int> mp;
int sum, com;
void dfs(int u){
    vis[u] = true;
    sum += mp[u];
    com++;
    for(auto v : g[u]){
        if(!vis[v]){
            dfs(v);
        }
    }
}
int32_t main()
{   
    opt();
    
    tc{
        memset(vis, 0, sizeof(vis));
        memset(g, 0, sizeof(g));
        mp.clear();
        sum = 0, com = 0;
        int n, m; cin >> n >> m;
       
        string ans = "Yes";
        for(int i = 1; i <= n;i++){
            int x; cin >> x;
            mp[i] = x;
        }
        
        while(m--){
            int u, v; cin >> u >> v;
            g[u].push_back(v);
            g[v].push_back(u);
        }
        int avr = -1;
        for(int i = 1; i <= n; i++){
            if(!vis[i]){
                com = 0;
                sum = 0;
                dfs(i);
                if(sum % com) ans = "No";
                else{
                    if(avr != -1 and sum / com == avr){
                        avr = sum / com;
                    }
                    else if(avr == -1) avr = sum / com;
                    else ans = "No" ;
                }
            }
        }
        
        cout << "Case " << _ << ": " << ans << endl;
    }

    
    return 0;
}