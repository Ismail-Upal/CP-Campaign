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
        int n, k; cin >> n >> k;
        vector<int> v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }
        int x = v[k - 1];
        sort(v.begin(), v.end());
        int t = 1, ok = 1;
        for(int i = 0; i < n - 1; i++){
            if(v[i] < x) continue;
            int stnd = v[i] + 1;
            int diff = v[i + 1] - v[i];
            if(v[i] == v[n - 1]) break;
            if(stnd - t >= diff) t += diff;
            else{
                ok = 0; break;
            }
        }

        if(ok) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}