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
    
    tc{
        ll n, m, x, y; cin >> n >> m >> x >> y;
        vector<int> a(n), b(m);
        for(int i = 0;i < n; i++) cin >> a[i];
        for(int i = 0;i < m; i++) cin >> b[i];

        cout << n + m << endl;
    }
    
    return 0;
}