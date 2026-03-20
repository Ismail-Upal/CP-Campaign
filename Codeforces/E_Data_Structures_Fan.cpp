#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------


void Solve(){
    int n; cin >> n;
    vector<int> v(n + 1);
    for(int i = 1; i <= n; i++) cin >> v[i];
    string s; cin >> s;

    vector<ll> pref(n + 1);
    ll cng = 0, one = 0, zro = 0;

    for(int i = 1; i <= n; i++){
        pref[i] = pref[i - 1] ^ v[i];

        if(s[i - 1] == '1') one ^= v[i];
        else zro ^= v[i];
    }

    int q; cin >> q;
    while(q--){
        int t; cin >> t;
        if(t == 1){
            int l, r; cin >> l >> r;
            cng ^= pref[r] ^ pref[l - 1];
        }
        else{
            int g; cin >> g;
            if(g == 0) cout << (zro ^ cng) << " ";
            else cout << (one ^ cng) << " ";
        }
    }
    cout << endl;
}

int main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1; cin >> t;
    for(int i = 1; i <= t; i++){
        Solve();
    }
    
    return 0;
}