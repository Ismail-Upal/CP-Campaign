#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    int n; cin >> n;
    vector<pair<int, int>> v(n);
    vector<vector<int>> b(n, vector<int> (3));
    vector<int> ptr(n, 0);
    for(int i = 0; i < n; i++){
        cin >> b[i][0] >> b[i][1] >> b[i][2];
        v[i] = {b[i][0], i};
        v[i] = {b[i][1], i};
        v[i] = {b[i][2], i};
        sort(b[i].begin(), b[i].end());
    }

    set<pair<int, int>> se;
    for(int i = 0; i < n; i++){
        se.insert({b[i][0], i});
    }
    int ans = 1e9;
    while(sz(se) == n){
        auto [mx, i] = *se.rbegin();
        auto [mn, j] = *se.begin();
        ans = min(ans, mx - mn);

        se.erase({mn, j});
        ptr[j]++;
        if(ptr[j] < 3) se.insert({b[j][ptr[j]], j});
    }
    cout << ans << endl;
}

int main()
{   
    fast;
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++){
        Solve();
    }
    
    return 0;
}