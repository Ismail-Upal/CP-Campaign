#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
//-------------------------------------------
int n, m, k; 
auto func(int x, int y){
    int diff = 0;
    // for(int i = 0; i < n; i++){
    //     int bx = x >> i & 1;
    //     int by = y >> i & 1;
    //     if(bx != by){
    //         diff++;
    //     }
    // }
    diff = __builtin_popcount(x ^ y);
    return diff <= k;
}
int32_t main()
{   
    opt();
    
    cin >> n >> m >> k;
    vector<int> v(m + 2);
    for(int i = 1; i <= m + 1; i++) cin >> v[i];
    int frnd = 0;
    for(int i = 1; i <= m; i++){
        frnd += func(v[i], v[m + 1]);
    }
    cout << frnd;
    return 0;
}