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
        ll x, m; cin >> x >> m;
        set<int> se;
        // for(int i = 1; i * i <= x; i++){
        //     if(x % i == 0){
        //         int a = (x ^ i), b = (x ^ (x / i));
        //         cout << i << " " << a << endl;
        //         if(a <= m and a > 0) se.insert(a);
        //         if(b <= m and b > 0) se.insert(b);
        //     }
        // }
        int on = __lg(x), mx = 0;
        for(int i = 0; i <= on; i++){
            mx |= (1 << i);
        }
        for(int i = 1; i <= mx and i <= m; i++){
            int div = (x ^ i);
            if(div == 0) continue;
            if(x % div == 0 or i % div == 0){
                se.insert(i);
            }
        }
        // for(auto i : se) cout << i << ' ' ;
        cout << sz(se) << endl;
    }
    
    return 0;
}