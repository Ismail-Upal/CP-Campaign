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
    opt(); setIO("lostcow");
    
    int x, y; cin >> x >> y;
    if(x == y) cout << 0;
    else if(x < y){
        int dis = 1;
        vector<int> v; v.push_back(x);
        while(x + dis < y){
            v.push_back(x + dis);
            dis *= -2;
        }
        int ans = 0;
        for(int i = 0; i < sz(v) - 1; i++){
            ans += abs(v[i] - v[i + 1]);
        }
        ans += abs(v[sz(v) - 1] - y);
        cout << ans << endl;
    }
    else if(x > y){
        int dis = 1;
        vector<int> v; v.push_back(x);
        while(x + dis > y){
            v.push_back(x + dis);
            dis *= -2;
        }
        int ans = 0;
        for(int i = 0; i < sz(v) - 1; i++){
            ans += abs(v[i] - v[i + 1]);
        }
        ans += abs(v[sz(v) - 1] - y);
        cout << ans ;
    }
    

    return 0;
}