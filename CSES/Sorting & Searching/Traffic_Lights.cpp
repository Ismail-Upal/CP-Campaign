#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    int x, n; cin >> x >> n;
    set<int> se = {0, x};
    multiset<int> dif = {x};

    for(int i = 0; i < n; i++){
        int a; cin >> a;
        auto hi = se.upper_bound(a);
        auto lo = se.lower_bound(a); lo--;
        int d = *hi - *lo;
        dif.erase(dif.lower_bound(d));
        se.insert(a);
        dif.insert(*hi - a);
        dif.insert(a - *lo);
        cout << *dif.rbegin() << " ";
    }
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