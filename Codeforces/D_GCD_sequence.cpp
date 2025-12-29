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
        int n; cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++) cin >> v[i];
        vector<int> g(n - 1);
        for(int i = 0; i < n - 1; i++){
            g[i] = __gcd(v[i], v[i + 1]);
        }


        if(is_sorted(g.begin(), g.end())){
            cout << "YES" << endl; continue;
        }

        int x = -1;
        for(int i = 1; i < n - 1; i++){
            if(g[i - 1] > g[i]){
                x = i; break;
            }
        }
        if(x == -1){
            cout << "YES" << endl;
            continue;
        }

        auto func = [&](int x){
            vector<int> a;
            for(int i = 0; i < n; i++){
                if(i != x) a.push_back(v[i]);
            }
            vector<int> gc;
            for(int i = 0; i < sz(a) - 1; i++){
                gc.push_back(__gcd(a[i], a[i + 1]));
            }
            // for(int i : a) cout << i << " " ;
            // cout << endl;
            return is_sorted(gc.begin(), gc.end());
        };

        bool ans = func(x) | func(x - 1) | func(x + 1) | func(0) | func(n - 1);

        if(ans) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}