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
    
    
        int n, k; cin >> n >> k;
        string s; cin >> s;
        map<char, int> mp;
        for(auto i : s) mp[i]++;
        ll odd = 0;
        for(auto i : mp){
            if(i.second % 2) odd++;
        }

        if(n % 2 == 0){
            odd--;
        }
        if(k >= odd) cout << "YES" << endl;
        else cout << "NO" << endl;
    
    return 0;
}