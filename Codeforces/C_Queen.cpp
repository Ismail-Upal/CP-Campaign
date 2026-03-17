#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------


void Solve(){
    int n; cin >> n;
    vector<set<int>> g(n + 5);
    vector<int> bad(n + 4), par(n + 4);

    for(int i = 1; i <= n; i++){
        int p, c; cin >> p >> c;
        par[i] = p;
        bad[i] = c;
        if(p != -1) g[p].insert(i);
    }
    set<int> se;
    for(int i = 1; i <= n; i++){
        if(par[i] == -1) continue;
        int ok = 1;
        if(!bad[i]) ok = 0;
        for(auto v : g[i]){
            if(!bad[v]) ok = 0;
        }
        if(ok) se.insert(i);
    }
    if(!sz(se)) cout << -1 ;
    else for(auto i : se) cout << i << " ";
}

int main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1; //cin >> t;
    for(int i = 1; i <= t; i++){
        Solve();
    }
    
    return 0;
}