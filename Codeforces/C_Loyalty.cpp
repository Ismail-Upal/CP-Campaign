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
        ll n, x; cin >> n >> x;
        vector<ll> v(n);
        ll sum = 0;
        for(ll i = 0; i < n; i++){
            cin >> v[i];
            sum += v[i];
        }
        
        sort(v.begin(), v.end());
        vector<int> a;

        ll s = 0, ans = 0;
        for(int i = 0; i < n; i++){
            if(s + v.back() >= x){
                ans += sum;
                s = i;
                a.push_back(v.back());
                break;
            }
            s += v[i];
            sum -= v[i];
            a.push_back(v[i]);
        }
        cout << ans << endl;
        for(int j = s; j < n - 1; j++) a.push_back(v[j]);
        for(auto i : a) cout << i << " " ;
        cout << endl;
    }
    
    return 0;
}