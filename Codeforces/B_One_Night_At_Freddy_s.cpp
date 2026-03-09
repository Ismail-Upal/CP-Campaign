#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------


void Solve(){
    int n, m, l; cin >> n >> m >> l;
    vector<ll> v(n + 1);
    for(int i = 1; i <= n; i++) cin >> v[i];

    multiset<ll> se;
    for(int i = 1; i <= m; i++) se.insert(0);
   
    for(int i = 1; i <= n; i++){
        ll d = min(m, n - i + 2);
        ll add = v[i] - v[i - 1] - 1;
        auto it = se.end(); it--;
        for(int i = 1; i <= d; i++){
            add += *it;
            it--;
        }
        it = se.end(); it--;
        for(int i = 1; i <= d; i++){
            *it = add / d;
            
        }
    }

}

int main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1; cin >> t;
    for(int i = 1; i <= t; i++){
        Solve();
    }
    
    return 0;
}