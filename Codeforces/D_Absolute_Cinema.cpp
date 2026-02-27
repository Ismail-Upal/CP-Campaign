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
        vector<ll> f(n + 1), v(n + 1);

        for(int i = 1; i <= n; i++) cin >> f[i];

        for(int i = 2; i < n; i++){
            v[i] = (f[i] - f[i - 1] + f[i] - f[i + 1]) / -2;
        }

        ll s1 = 0, sn = 0;

        for(int i = 2; i < n; i++) s1 += (i - 1) * v[i];
        for(int i = n - 1; i > 1; i--) sn += (n - i) * v[i];

        v[n] = (f[1] - s1) / (n - 1);
        v[1] = (f[n] - sn) / (n - 1);

        for(int i = 1; i <= n; i++) cout << v[i] << " ";
        cout << endl;
    }
    
    return 0;
}                        