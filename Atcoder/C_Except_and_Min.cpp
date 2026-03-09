#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------


void Solve(){
    int n, q; cin >> n >> q;
    vector<int> v(n + 1);
    set<pair<int, int>> se;
    for(int i = 1; i <= n; i++){
        cin >> v[i];
        se.insert({v[i], i});
    }

    while(q--){
        int k; cin >> k;
        set<pair<int, int>> rem;
        for(int i = 0; i < k; i++){
            int x; cin >> x;
            rem.insert({v[x], x});
            se.erase({v[x], x});
        }
        auto it = *se.begin();
        cout << it.first << endl;

        for(auto p : rem) se.insert(p);
    }
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