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
        vector<int> v(n), b;
        for(int i = 0; i < n; i++) cin >> v[i];
        b = v;
        int ok = 1;
        sort(b.begin(), b.end());
        for(int i = 0; i < n; i++){
            if(v[i] % 2 != b[i] % 2){
                ok = 0;
                break;
            }
        }
        if(ok) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}