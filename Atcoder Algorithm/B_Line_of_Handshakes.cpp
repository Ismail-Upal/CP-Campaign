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
    
    ll ans = 0;
    char prel = '0', prer = '0';
    tc{
        char l, r; cin >> l >> r;
        if(prel != '0'){
            if(prer == l) ans++;
        }
        prel = l, prer = r;
    }
    cout << ans;
    
    return 0;
}