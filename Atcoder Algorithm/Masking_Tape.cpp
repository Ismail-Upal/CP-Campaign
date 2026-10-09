#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    int n, q; cin >> n >> q;

    vector<pair<char, int>> query(q + 1);
    set<int> tile, notile;
    for(int i = 1; i <= n; i++) notile.insert(i);

    for(int i = 1; i <= q; i++){
        int t; cin >> t;

        if(t == 1){
            int x; cin >> x;
            query[i] = {'#', x};

            auto it1 = tile.lower_bound(x);
            auto it2 = notile.lower_bound(x);

            if(it1 != tile.end() and *it1 == x){
                tile.erase(it1);
                notile.insert(x);
            }
            else if(it2 != notile.end() and *it2 == x){
                tile.insert(x);
                notile.erase(it2);
            }
        }
        else{
            char c; cin >> c;
            query[i] = {c, 0};
        }
    }
 
    vector<char> ans(n + 1, 'a');

    for(int i = q; i >= 1; i--){
        char c = query[i].first;

        if(c != '#'){
            for(auto i : notile){
                ans[i] = c;
            }
            
            notile.clear();
        }
        else{
            int x = query[i].second;

            auto it1 = tile.lower_bound(x);
            auto it2 = notile.lower_bound(x);

            if(it1 != tile.end() and *it1 == x){
                tile.erase(it1);
                notile.insert(x);
            }
            else if(it2 != notile.end() and *it2 == x){
                tile.insert(x);
                notile.erase(it2);
            }
        }
    }

    for(int i = 1; i <= n; i++) cout << ans[i];
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