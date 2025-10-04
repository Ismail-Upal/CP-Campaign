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
        string s; cin >> s;

        map<char, int> mp;

        int ok = 0;

        for(int i = 0; i < n - 1; i++){
            mp[s[i]]++;
            if(mp[s[i]] >= 2) ok = 1;
        }

        mp.clear();


        for(int i = 1; i < n; i++){
            mp[s[i]]++;
            if(mp[s[i]] >= 2) ok = 1;
        }


        if(ok) cout << "Yes"<< endl;
        else cout << "No" << endl;
    }
    
    return 0;
}