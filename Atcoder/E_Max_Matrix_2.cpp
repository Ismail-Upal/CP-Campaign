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
        int n, m; cin >> n >> m;
        vector<int> r(n + 1), c(m + 1);
        vector<pair<int, int>> rr(n), cc(m);

        for(int i = 1; i <= n; i++){
            cin >> r[i];
            rr[i - 1] = {r[i], i};
        }
        for(int i = 1; i <= m; i++){
            cin >> c[i];
            cc[i - 1] = {c[i], i};
        }
        int a[n + 1][m + 1];
        sort(rr.begin(), rr.end());
        sort(cc.begin(), cc.end());

        int ok = 0;
        for(int i = 1; i <= n; i++){
            int lo = lower_bound(cc.begin(), cc.end(), r[i]) - cc.begin();
            if(lo == m){ ok = -1; break;}
            // int j = cc[lo].second;
            // a[i][j] = r[i];
        }
        
        if(ok == -1){
            cout << "No" << endl; continue;
        }
        cout << "Yes" << endl;
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++){
                cout << a[i][j] << " " ;
            }
            cout << endl;
        }
    }
    
    return 0;
}