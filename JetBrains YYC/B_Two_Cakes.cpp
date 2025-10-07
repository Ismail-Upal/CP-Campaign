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
    
    int n, a, b; cin >> n >> a >> b;
    int ans = 0, mn = 1e9;
    for(int i = 1; i < n; i++){
        mn = min(a / i, b / (n - i));
        ans = max(ans, mn);
    }
    cout << ans ;
    
    return 0;
}