#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------

int main()
{   
    opt();
    
    int n; cin >> n;
    vector<vector<int>> g(n + 1);
    vector<int> indeg(n + 1);
    for(int i = 1; i <= n; i++){
        int v; cin >> v;
        g[v].push_back(i);
        indeg[v]++;
    }
    int ans = 0;
    for(int i = 1; i <= n; i++){
        if(indeg[i] >= 2){
            for(auto v : g[i]){
                if(indeg[v] <= 1) ans++;
            }
        }
    }

    cout << max(1, ans) << endl;

    
    return 0;
}