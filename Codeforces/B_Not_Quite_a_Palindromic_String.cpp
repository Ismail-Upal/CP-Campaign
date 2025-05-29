#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------

int32_t main()
{   
    opt();
    
    tc{
        int n, k; cin >> n >> k;
        k *= 2;

        string s; cin >> s;
        int mx = count(s.begin(), s.end(), '1');
        int mn = count(s.begin(), s.end(), '0');
        if(mn > mx) swap(mx, mn);
        cerr << mx << " " << mn ;

        k -= mx - mn;
        if(k < 0 or k % 2){
            cout << "NO" << endl; continue;
        }
        k /= 2;
        if(2 * mn >= k and k % 2 == 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}