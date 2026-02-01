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
        map<int, int> mp;

        for(int i = 0; i < n; i++){
            for(int j = 2; j * j <= v[i]; j++){
                while(v[i] % j == 0){
                    v[i] /= j;
                    mp[j]++;
                }
            }
            if(v[i] > 1) mp[v[i]]++;
        }
        int ok = 1;
        for(auto i : mp) {
            if(i.second % n != 0) ok = 0;
        }
        if(ok) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}