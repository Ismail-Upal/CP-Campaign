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
        int n; cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++) cin >> v[i];
        vector<int> a = v;
        sort(a.begin(), a.end());
        vector<int> ans(n);

        for(int i = 0; i < n; i++){
            auto lo = lower_bound(a.begin(), a.end(), v[i]) - a.begin();
            if(lo == 0 or lo == n - 1) cout << -1 << " " ;
            else{
                int l = (a[lo] - a[lo - 1] - 1);
                int r = (a[lo + 1] - a[lo] - 1);
                int s = l / 2;
                if(r % 2) s += (r / 2) + 1;
                else s += r / 2;
                cout << s + 1 << " " ;
            }
        }

        cout << endl;
    }
    
    return 0;
}