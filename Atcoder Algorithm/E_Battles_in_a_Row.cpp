#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
const int N = 3e3 + 3;
int n, h, m, a[N], b[N];

int rec(int i, int H, int M){
    if(i == n) return 0;
    if(H + a[i] > h and M + b[i] > m) return 0;

    int ans = 0;

    if(H + a[i] <= h) ans = rec(i + 1, H + a[i], M) + 1;
    if(M + b[i] <= m) ans = max(ans, rec(i + 1, H, M + b[i]) + 1);

    return ans;
}

int32_t main()
{   
    opt();
    
    cin >> n >> h >> m;
    for(int i = 0; i < n; i++) cin >> a[i] >> b[i];

    cout << rec(0, 0, 0);
    
    return 0;
}

