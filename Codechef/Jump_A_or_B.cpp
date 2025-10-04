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
        ll n, m, a, b; cin >> n >> m >> a >> b;
        if(a > b) swap(a, b);
        if(n * b < m or n * a > m){
            cout << "No" << endl; continue;
        }

        ll dif = b - a;
        ll rem = (n * b) - m;
        if(rem % dif == 0) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    
    return 0;
}