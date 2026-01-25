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
        ll s, k, m; cin >> s >> k >> m;
        if(s <= k){
            m = m % k;
            if(s <= m) cout << 0 << endl;
            else cout << s - m << endl;
        }
        else{
            m = m % (2 * k);
            if(m < k){
                cout << s - m << endl;
            }
            else{
                cout << s - ((m - k) + (s - k)) << endl;
            }
        }
    }
    
    return 0;
}