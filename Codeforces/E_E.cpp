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
        int n; cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++) cin >> v[i];
        int cnt = 1 + n;
        sort(v.begin(), v.end());
        for(int i = n - 1; i >= 0; i--){
            if(v[i] > cnt - 1) cnt--;
            else break;
        }
        cout << cnt << endl;
    }
    
    return 0;
}