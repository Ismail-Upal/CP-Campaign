#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
//-------------------------------------------

int32_t main()
{   
    opt();
    
    tc{
        int n, m; cin >> n >> m ;
        vector<int> a(n + 1, 0), b(m + 1, 0);
        for(int i = 1; i <= n; i++) cin >> a[i];
        for(int i = 1; i <= m; i++) cin >> b[i];
        if(b[1] - a[1] < a[1]) a[1] = b[1] - a[1];
    
        for(int i = 2; i <= n; i++){
            int p1 = b[1] - a[i];
            int p2 = a[i];

        }
        if(is_sorted(a.begin() + 1, a.end())) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}