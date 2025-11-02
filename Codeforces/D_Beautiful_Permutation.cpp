#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc ll t; cin >> t; for (ll _ = 1; _ <= t; _++)
using ll = long long;
// #define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
ll query(ll t, ll l, ll r){
    ll s;
    cout << t << " " << l << " " << r << endl;
    cin >> s;
    return s;
}

int main()
{   
    opt();
    
    tc{
        ll n; cin >> n;
        
        ll dif = query(2, 1, n) - query(1, 1, n);
        
        int l = 1, r = n, L, R, m;
        while(l <= r){
            m = l + (r - l) / 2;
            ll s1 = query(1, 1, m);
            ll s2 = query(2, 1, m);
            if(s2 > s1){
                L = m;
                r = m - 1;
            }
            else l = m + 1;
        }

        R = L + dif - 1;

        cout << "!" << " " << L << " " << R << endl;
    }
    
    return 0;
}