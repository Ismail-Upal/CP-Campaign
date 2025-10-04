#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
void setIO(string name){
    freopen((name+".in").c_str(),"r",stdin);
    freopen((name+".out").c_str(),"w",stdout);
}
//-------------------------------------------

int32_t main()
{   
    opt(); setIO("teleport");
    
    int a, b, x, y; cin >> a >> b >> x >> y;
    int p1 = abs(a - b);
    int p2 = min(abs(b - x), abs(b - y));
    p2 += min(abs(a - x), abs(a - y));
    cout << min(p1, p2) << endl;
    
    return 0;
}