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
    
    int n, k; cin >> n >> k;
    string s; cin >> s;
    vector<int> v;
    for(int i = 0; i < k; i++){
        char c; cin >> c;
        for(int j = 0; j < n; j++){
            if(c == s[j]) v.push_back(j);
        }
    }
    sort(v.begin(), v.end());
    if(sz(v) == 0){
        cout << 0 << endl; return 0;
    }
    int l = v[0], r = v[0];
    ll ans = 0;
    for(int i = 1; i < sz(v); i++){
        if(v[i] == v[i - 1] + 1){
            r = v[i];
        }
        else{
            ll m = r - l + 1;
            ans += m * (m + 1) / 2;
            l = v[i], r = v[i];
        }
    }
    ll m = r - l + 1;
    ans += m * (m + 1) / 2;
    cout << ans << endl;
    
    return 0;
}