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
        vector<int> v(n * k);

        for(int i = 0; i < n * k; i++) cin >> v[i];
        sort(v.begin(), v.end());

        ll sum = 0, i = n * k;
        while(k--){
            i -= (n / 2) + 1; 
            sum += v[i] ;
        }

        cout << sum << endl;
    }
    
    return 0;
}