#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
const int N = 1e5;
int n, v[N];

int rec(int level, int prev){
    if(level == n) return 0;

    int ans = rec(level + 1, prev);
    if(prev == -1 or v[level] > v[prev]) ans = max(ans, rec(level + 1, level) + 1);
    
    return ans;
}

int32_t main()
{   
    opt();
    
    cin >> n;
    for(int i = 0; i < n; i++) cin >> v[i];

    cout << rec(0, -1);
    
    return 0;
}