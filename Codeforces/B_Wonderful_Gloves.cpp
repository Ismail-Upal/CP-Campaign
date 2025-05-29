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
        vector<int> v(n), b(n);
        ll sum = 0;
        for(int i = 0; i < n; i++){
            cin >> v[i]; 
        }
        for(int i = 0; i < n; i++){
            cin >> b[i]; 
        }
        for(int i = 0; i < n; i++){
            if(i > k) sum += min(v[i], b[i]);
            else{
                sum += v[i];
                sum += b[i];
            }
        }
        cout << sum << endl;
    }
    
    return 0;
}