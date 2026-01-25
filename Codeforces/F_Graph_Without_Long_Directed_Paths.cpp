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
        int n, m; cin >> n >> m;
        if(m > n) swap(n, m);

        ll ans = 0;
        for(int j = 1; j <= m; j++){
            int l = j * (j - 1);
            if(l <= n){
                ans++;
                ans += (n - l) / j;
            }
        }
        cout << ans << endl;
    }
    
    return 0;
}