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
    
    int n; cin >> n;
    string s, t; cin >> s >> t;

    int ans = 0;
    map<char, int> mp, same;
    for(int i = 0; i < n; i++){
        if(s[i] == t[i]){
            same[s[i]]++;
        }
        else if(s[i] != t[i] and same[s[i]]){
            ans = -1;
            break;
        }
        else if(s[i] != t[i] and !mp[s[i]]){
            ans ++;
            mp[s[i]]++;
            s[i] = t[i];
        }
        else if(s[i] != t[i] and mp[s[i]]){
            s[i] = t[i];
        }
    }
    if(s != t) ans = -1; 
    cout << ans << endl;
    
    return 0;
}