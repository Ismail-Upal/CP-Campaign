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
    
    ll n; cin >> n;
    vector<ll> b(n), c(n), a(n);
    ll s = 0;
    for(int i = 0; i < n; i++){cin >> b[i]; s += b[i];}
    for(int i = 0; i < n; i++){cin >> c[i]; s += c[i];}

    if(s % (2 * n)){
        cout << -1 ; return 0;
    }

    s = s / (2 * n);

    for(int i = 0; i < n; i++){
        a[i] = (b[i] + c[i] - s);
        if(a[i] % n){
            cout << -1 ; return 0;
        }
        a[i] /= n;
    }

    vector<ll> cnt(30);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 30; j++){
            cnt[j] += (a[i] >> j) & 1;
        }
    }

    for(int i = 0; i < n; i++){
        ll bb = 0;
        for(int j = 0; j < 30; j++){
            bb += (cnt[j] * ((a[i] >> j) & 1)) << j;
        }
        if(bb != b[i]){
            cout << - 1;
            return 0;
        }
    }

    for(int i = 0; i < n; i++){
        ll cc = 0;
        for(int j = 0; j < 30; j++){
            cc += (cnt[j] + (n - cnt[j]) * ((a[i] >> j) & 1)) << j;
        }
        if(cc != c[i]){
            cout << -1; 
            return 0;
        }
    }
    
    for(auto i : a) cout << i << " ";
        
    return 0;
}