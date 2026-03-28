#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------


void Solve(){
    int n, m; cin >> n >> m;
    
    vector<pair<int, int>> a, b;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            char c; cin >> c;
            if(c == '1') a.push_back({i, j});
        }
    }

    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            char c; cin >> c;
            if(c == '1') b.push_back({i, j});
        }
    }

    map<pair<int, int>, int> mp;
    int a1, a2;

    for(auto [i, j] : a){
        for(auto [x, y] : b){
            mp[{x - i, y - j}]++;
            a1 = x - i, a2 = y - j;
        }
    }
    
    for(auto [i, j] : mp){
        if(mp[i] > mp[{a1, a2}]) a1 = i.first, a2 = i.second;
    }

    cout << a1 << " " << a2 ;
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