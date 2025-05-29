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
        int n, q; cin >> n >> q;
        vector<ll> v(n), x;
        map<int, int> mp;

        ll mx = 0;
        for(int i = 0; i < n; i++) cin >> v[i];
        for(int i = 0; i < q; i++){
            int z; cin >> z;
            if(!mp[z]) x.push_back(z), mp[z]++;
        }
        
        for(int i = 0; i < n; i++){
            for(int j = 0; j < sz(x); j++){
                if(v[i] % (1 << x[j]) == 0){
                    v[i] += (1 << (x[j] - 1));
                }
            }
        }

        for(int i = 0; i < n; i++) cout << v[i] << " ";
        cout << endl;
    }
    
    return 0;
}