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
        int n, k; cin >> n >> k;
        vector<ll> v(n);
        for(int i = 0; i < n; i++) cin >> v[i];
        sort(v.begin(), v.end());

        ll ans = 0, sum = 0;
        int i = 0, j = 0;
        while(j < n){
            sum += v[j];
            if(n - j > k) j++;
            else{
                sum -= v[i];
                sum -= v[i + 1];
                i += 2;
                j++;
            }
            ans = max(ans, sum);
        }

        cout << ans << endl;
    }
    
    return 0;
}