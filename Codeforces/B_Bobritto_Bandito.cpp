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
    
    tc{
        int n, m, l, r; cin >> n >> m >> l >> r;
        int tot = abs(l) + abs(r);
        int lo = 0, hi = 0;
        while(m--){
            if(lo > l) lo--;
            else if(hi < r) hi++;
        }
        cout << lo << " " << hi << endl;
    }
    
    return 0;
}