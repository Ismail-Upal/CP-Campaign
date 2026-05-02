#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

template <typename T> using pbds_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    int n; cin >> n;
    vector<int> v(n);
    pbds_set<int> l, r;
    for(int i = 0; i < n; i++){
        cin >> v[i];
        r.insert(v[i]);
    }
    int ans = 0;
    for(int i = 0; i < n; i++){
        r.erase(v[i]);
        int x = l.order_of_key(v[i]);
        int y = sz(r) - r.order_of_key(v[i]);
        if(x == y) ans++;
        l.insert(v[i]);
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