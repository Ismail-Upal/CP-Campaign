#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
const int N = 1e4;
int n, m;
int pref[N], a[N], sub[N];
int main()
{   
    opt();
    
    cin >> n >> m;
    for(int i = 1; i <= n; i++) cin >> a[i];
    for(int i = 1; i <= n; i++){
        pref[i] = pref[i - 1] + a[i];
    }
    for(int i = 1; i <= m; i++){
        int l, r; cin >> l >> r;
        sub[i] = pref[r] - pref[l - 1];
    }   
    int ans = 0;
    for(int i = 1; i <= m; i++){
        if(sub[i] > 0) ans += sub[i];
    } 
    cout << ans;
    
    return 0;
}