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
        int n, r, c; cin >> n >> r >> c;
        vector<int> v;
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            if(x <= r or x <= c) v.push_back(x);
        }
        if(r > c) swap(r, c);
        int x = 0, y = 0;
        for(int i : v){
            if(i <= r) x++;
            else y++;
        }
        int ans = 0;
        if(y >= x) ans = x;
        else if(x > y) ans = max({ans, y + ((x - y) / 2)});
        cout << ans << endl;
    }
    
    return 0;
}