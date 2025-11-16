#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------

int main()
{   
    opt();
    
    tc{
        ll n; cin >> n;
        set<ll> se;
        for(int i = 1; i * i <= n; i++){
            se.insert(i);
            se.insert(n / i);
        }
        se.insert(0);
        cout << sz(se) << endl;
        for(auto i : se) cout << i << " " ;
        cout << endl;
    }
    
    return 0;
}

