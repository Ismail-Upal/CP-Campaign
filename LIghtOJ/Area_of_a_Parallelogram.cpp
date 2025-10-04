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
        int ax, ay, bx, by, cx, cy; cin >> ax >> ay >> bx >> by >> cx >> cy;
        int dx = cx - abs(bx - ax), dy = cy;
        int l = abs(bx - ax) * abs(bx - ax) + abs(by - ay) * abs(by - ay);
        int r = abs(cx - bx) * abs(cx - bx) + abs(cy - by) * abs(cy - by);
        cout << "Case " << _ << ": " << dx << " " << dy << " " << l * r << endl;
    }
    
    return 0;
}