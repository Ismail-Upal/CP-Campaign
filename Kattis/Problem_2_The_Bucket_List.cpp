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
const int N = 1e3 +3;
int a[N];
int32_t main()
{   
    opt(); setIO("blist");
    
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        int s, e, b; cin >> s >> e >> b;
        a[s] += b;
        a[e] -= b; 
    }
    int ans = 0;
    for(int i = 1; i <= N; i++){
        a[i] += a[i - 1];
        ans = max(ans, a[i]);
    }
    cout << ans ;


    return 0;
}