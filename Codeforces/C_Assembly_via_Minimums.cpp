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
        int m = n * (n - 1) / 2;
        vector<int> v(m), ans(n);
        map<int, int> mp;
        for(int i = 0; i < m; i++){
            cin >> v[i];
            mp[v[i]]++;
        }
        sort(v.begin(), v.end());
        v.erase(unique(v.begin(), v.end()), v.end());

        int i = 1;
        for(int j : v){
            while(mp[j] > 0){
                mp[j] -= n - i;
                cout << j << ' ';
                i++;
            }
        }
        while(i <= n){
            cout << v.back() << " ";
            i++;
        }
        cout << endl;
    }
    
    return 0;
}