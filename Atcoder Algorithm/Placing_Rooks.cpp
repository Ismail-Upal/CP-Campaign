#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    int n, m; cin >> n >> m;
    vector<pair<int, int>> q(m + 1);
    for(int i = m; i >= 1; i--){
        int r, c; cin >> r >> c;
        q[i] = {r, c};
    }
    ll ans = 0;
    vector<bool> row(n + 1, 0), col(n + 1, 0);
    for(int i = 1; i <= m; i++){
        int r = q[i].first, c = q[i].second;
        if(!row[r] and !col[c]){
            ans++;
        }
        row[r] = 1;
        col[c] = 1;
    }
    cout << ans << endl;
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