#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
void setIO(string s){
    if (!s.empty()){
        freopen((s + ".in").c_str(), "r", stdin);
        freopen((s + ".out").c_str(), "w", stdout);
    }
}
//-------------------------------------------

int32_t main()
{   
    opt(); setIO("");
    
    tc{
        cout << "Case " << _ << ":" << endl; 
        int a, b, c, d; cin >> a >> b >> c >> d;
        int e = a, f = d, g = c, h = b;
        int q; cin >> q;
        // cout << a << b << c << d << e << f << g << h << endl;
        while(q--){
            int x, y; cin >> x >> y;
            if(x >= a and x <= c and y <= d and y >= b) cout << "Yes" << endl;
            else cout << "No" << endl;
        }
    }
    
    return 0;
}