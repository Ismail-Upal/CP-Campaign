#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
void setIO(string name){
    freopen((name+".in").c_str(),"r",stdin);
    freopen((name+".out").c_str(),"w",stdout);
}
//-------------------------------------------

int32_t main()
{   
    opt(); setIO("speeding");
    
    vector<int> a(101, 0), b(101, 0);
    int n, m; cin >> n >> m;
    int cur = 0;
    while(n--){
        int d, v;
        cin >> d >> v;
        for(int i = cur + 1; i <= d + cur; i++) a[i] = v;
        cur += d;
    }
    
    int ans = 0;
    cur = 0;
    while(m--){
        int d, v; cin >> d >> v;
        for(int i = cur + 1; i <= d + cur; i++) b[i] = v;
        cur += d;
    }
    
    for(int i = 1; i <= 100; i++){
        ans = max(ans, b[i] - a[i]);
    }

    cout << ans << endl;
    
    return 0;
}