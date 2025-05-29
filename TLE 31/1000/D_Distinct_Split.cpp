#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t;cin>>t;while(t--)
//-------------------------------------------
 
int32_t main()
{   
    opt();
 
    tc{
        int n; cin >> n;
        string s; cin >> s;
        map<char, int> mp1, curr;
    
        for(int i = 0; i < n; i++) mp1[s[i]] ++;
        int ans = 0;
        for(int i = 0; i < n; i++){
            curr[s[i]] ++;
            mp1[s[i]] --;
            if(mp1[s[i]] == 0) mp1.erase(s[i]);
            int l = sz(curr);
            int r = sz(mp1);
            ans = max(ans , l + r);
        }

        cout << ans << endl;
    }
    
    return 0;
}