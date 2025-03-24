#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
//-------------------------------------------

int32_t main()
{   
    opt();
    
    tc{
        int n; cin >> n;
        vector<int> v(n), l, r;
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }
        ll lsum = 0, rsum = 0, sum1 = 0,sum2 = 0;
        for(int i = 0; i < n; i++){
            if(v[i] < 0) l.push_back(abs(v[i]));
            else r.push_back(v[i]);
            sum1 += v[i];
            sum2 += abs(v[i]);
        }
        lsum = accumulate(l.begin(), l.end(), 0LL);
        rsum = accumulate(r.begin(), r.end(), 0LL);
        
        cout << max({sum1, lsum, rsum, sum2}) << endl;
    }
    
    return 0;
}