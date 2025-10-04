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
        int n, j, k; cin >> n >> j >> k;
        vector<int> v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }
        int x = v[j - 1];
        sort(v.begin(), v.end());
        int idx = upper_bound(v.begin(), v.end(), x) - v.begin();
        idx -= 1;
        if(idx == n - 1){
            cout << "YES" << endl; continue;
        }

        int mem = n - (n - 1 - idx - 1) - idx;
        if(mem <= k) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
    
    return 0;
}