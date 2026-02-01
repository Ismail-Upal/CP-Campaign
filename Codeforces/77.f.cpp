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
        string s; cin >> s;
        map<string, int> mp;
        int ok = 0;
        
        string t = ""; t += s[0], t += s[1];
        mp[t]++;

        for(int i = 2; i < n - 1; i++){
            t = "";
            t += s[i];
            t += s[i + 1];

            if(mp[t]) ok = 1;
            t = "";
            t += s[i - 1];
            t += s[i];
            mp[t]++;
        }

        if(ok) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}