#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
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
        string s, t; cin >> s >> t;
        map<char, int> mp;
        for(auto i : s) mp[i]++;
        bool ok = true;
        for(int i = 0; i < n - 1; i ++){
            if(mp['0'] == 0 or mp['1'] == 0){
                ok = false; break;
            }
            if(t[i] == '0'){
                mp['1']--;
            }
            else mp['0']--;
        }
        if(ok) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}