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
    
    tc{
        int n; cin >> n;
        vector<int> v(n + 1);
        int odd = 0, evn = 0;
        for(int i = 1; i <= n; i++){
            cin >> v[i];
            if(v[i] & 1) odd++;
            else evn ++;
        }
        cout << max(evn, odd) << endl;

    }
    
    return 0;
}