#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
//-------------------------------------------
const int N = 1e6;
int l[N], r[N], x[N], opr[N];
ll a[N], d[N];
int32_t main()
{   
    opt();
    
    int n, m, k; cin >> n >> m >> k;
    for(int i = 1; i <= n; i++) cin >> a[i];
    for(int i = 1; i <= n; i++) d[i] = a[i] - a[i - 1];

    for(int i = 1; i <= m; i++) cin >> l[i] >> r[i] >> x[i];

    for(int i = 1; i <= k; i++){
        int l, r; cin >> l >> r;
        opr[l]++;
        opr[r + 1] --;
    }
    // for(int i = 1; i <= m; i++) cout << opr[i] << ' ';
    for(int i = 1; i <= m; i++){
        opr[i] += opr[i - 1];
    }
    // cout << endl;
    // for(int i = 1; i <= m; i++) cout << opr[i] << ' ';

    for(int i = 1; i <= m; i++){
        d[l[i]] += 1LL * opr[i] * x[i];
        d[r[i] + 1] -= 1LL * opr[i] * x[i]; 
    }

    for(int i = 1; i <= n; i++){
        a[i] = a[i - 1] + d[i];
    }
    for(int i = 1; i <= n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}