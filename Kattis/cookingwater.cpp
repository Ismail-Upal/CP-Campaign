#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------

int32_t main()
{   
    opt();
    
    int l = INT_MAX, r = INT_MIN;
    int ans = 0;
    tc{
        int a, b; cin >> a >> b;
        l = min(l, a);
        r = max(r, b);
        if(l == a and r == b)
    }
    
    return 0;
}