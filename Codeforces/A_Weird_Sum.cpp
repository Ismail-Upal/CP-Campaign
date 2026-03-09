#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
const int N = 1e5 + 3;

void Solve(){
    int n, m; cin >> n >> m;
    map<int, vector<int>> r, c;
    set<int> se;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            int x; cin >> x;
            se.insert(x);
            r[x].push_back(i);
            c[x].push_back(j);
        }
    }
    ll ans = 0;
    for(auto i : se){
        sort(r[i].begin(), r[i].end());
        sort(c[i].begin(), c[i].end());
        ll sum = 0, pre = 0;
        for(int j : r[i]) sum += j;
        for(int j = 0; j < sz(r[i]); j++){
            ll sub = (r[i][j] - pre) * (sz(r[i]) - j);
            sum -= sub;
            ans += sum;
            pre = r[i][j];
        }

        sum = 0, pre = 0;
        for(int j : c[i]) sum += j;
        for(int j = 0; j < sz(c[i]); j++){
            ll sub = (c[i][j] - pre) * (sz(c[i]) - j);
            sum -= sub;
            ans += sum;
            pre = c[i][j];
        }
    }

    cout << ans << endl;
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