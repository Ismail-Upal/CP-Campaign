#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
void setIO(string s){
    if (!s.empty()){
        freopen((s + ".in").c_str(), "r", stdin);
        freopen((s + ".out").c_str(), "w", stdout);
    }
}
//-------------------------------------------

int32_t main()
{   
    opt(); setIO("");
    
    int ans = 0;
    int n; cin >> n;
    while(n--){
        int x; cin >> x;
        ans ^= x;
    }
    cout << ans;
    
    return 0;
}