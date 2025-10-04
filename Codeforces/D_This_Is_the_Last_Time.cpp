#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
struct coin{
    int l, r, rl;
};
int main()
{   
    opt();
    
    tc{
        int n, x; cin >> n >> x;
        vector<coin> v;
        for(int i = 0; i < n; i++){
            int l, r, rl; cin >> l >> r >> rl;
            v.push_back({l, r, rl});
        }
        auto cmp = [&](auto a, auto b){
            return a.rl < b.rl;
        };
        sort(v.begin(), v.end(), cmp);

        for(auto i : v){
            if(x >= i.l and x <= i.r) x = max(i.rl, x);
        }
        cout << x << endl;
    }
    
    return 0;
}