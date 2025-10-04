#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
//-------------------------------------------

int32_t main()
{   
    opt();
    
    int n; cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    for(int mask = 0; mask < (1 << n); mask++){
        int sum = 0;
        for(int k = 0; k < n; k++){
            if(mask >> k & 1) sum += v[k];
            else sum -= v[k];
            sum += 360;
            sum %= 360;
        }
        if(sum == 0){
            cout << "YES" ;
            return 0;
        }
    }
    cout << "NO" ;
    
    return 0;
}