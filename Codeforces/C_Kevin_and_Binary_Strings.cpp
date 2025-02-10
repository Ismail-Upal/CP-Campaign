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
    
    tc{
        string s; cin >> s;
        int z = 0, n = sz(s);
        for(int i = 0; i < n; i++){
            if(s[i] == '0'){
                z = i; break;
            }
        }
        cout << 1 << " " << n << ' ';
        if(z == 0){
            cout << 1 << " " << 1 << endl;
            continue;
        }
        vector<pair<string, pair<int, int>>> v;
        int len = n - z;
        for(int i = 0; i < z; i++){
            string ans;
            for(int j = 0; j < len; j++){
                if(s[i + j] == s[z + j]){
                    ans += '0';
                }
                else ans += '1';
            }
            v.push_back({ans, {i + 1, i + len}});
        }
        auto it = *max_element(v.begin(), v.end());
        cout << it.second.first << ' ' << it.second.second << endl;
    }
    
    return 0;
}