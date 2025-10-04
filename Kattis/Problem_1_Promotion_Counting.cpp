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
    opt(); setIO("promote");
    
    ll a, b, c, d, e, f, g, h; 
    cin >> a >> b >> c >> d >> e >> f >> g >> h;
    ll s = 0, gl = 0, p = 0;

    p = h - g;
    gl = f - e + p;
    s = d - c + gl;
    cout << s << endl << gl << endl << p;
    
    return 0;
}