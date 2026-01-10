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
        int mex = 0;
        map<int, int> mp;
        for(int i = 0; i < n; i++){
            cin >> v[i];
            mp[v[i]]++;
            while(mp[mex]) mex++;
        }

        cout << min(k - 1, mex) << endl;
    }
    
    return 0;
}