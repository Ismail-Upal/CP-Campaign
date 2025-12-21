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
        int n, k, q; cin >> n >> k >> q;
        vector<int> v(n + 3, -1);
        vector<int> mex(n + 2, 0), mn(n + 2, 0);
        while(q--){
            int c, l, r; cin >> c >> l >> r;
            if(c == 1){
                for(int i = l; i <= r; i++) mn[i] = 1;
            }
            else{
                for(int i = l; i <= r; i++) mex[i] = 1;
            }
        }

        for(int i = 1; i <= n; i++){
            if(mex[i] and mn[i]) v[i] = k + 1;
            if(!mex[i] and mn[i]) v[i] = k;
            if(mex[i] and !mn[i]) v[i] = i % k;
        }

        for(int i = 1; i <= n; i++){
            if(v[i] == -1) v[i] = 0;
            cout << v[i] << " " ;
        }
        cout << endl;
    }
    
    return 0;
}