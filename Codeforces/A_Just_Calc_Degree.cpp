#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
const int N = 1e3 + 3;
vector<int> g[N];

int main()
{   
    opt();
    
    int n; cin >> n;
    for(int i = 2; i <= n; i++){
        int u; cin >> u;
        g[u].push_back(i);
    }    
    int ok = 1;
    for(int i = 1; i <= n; i++){
        if(sz(g[i]) == 0) continue;
        
        int cnt = 0;
        for(auto v : g[i]){
            if(sz(g[v]) == 0) cnt++;
        }
        if(cnt < 3) ok = 0;
    }
    if(ok) cout << "Yes" ;
    else cout << "No" ;

    return 0;
}