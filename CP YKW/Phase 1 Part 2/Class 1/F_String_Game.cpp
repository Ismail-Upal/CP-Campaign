#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t;cin>>t;while(t--)
//-------------------------------------------
 
int32_t main()
{	opt();
 
    string t, p; cin >> t >> p;
    int n = sz(t);
    vector<int> v( n );
    for(int i=0; i < n ; i++){
        cin >> v[i]; 
        v[i] --;
    }

    auto is_subsecuence = [](string s, string p){
        int m = s.size(), i = 0;
        for(char c : p){
            while(i<m and s[i] != c){
                i++;
            }
            if(i >= m)return false;
            i++;
        }
        return true;
    };

    auto ok = [&](int ind){
        vector<bool> copy(n, true);
        for(int i = 0; i < ind; i++){
            copy[v[i]] = false;
        }   
        string s = "";
        for(int i = 0; i < n; i++){
            if(copy[i]) s += t[i];
        }
        
        return is_subsecuence(s, p);
    };

    int l = 0, r = n-1, ans = 0, mid;
    while(l <= r){
        mid = l + (r - l) / 2;
        if(ok(mid)){
            ans = mid;
            l = mid + 1;
        }
        else r = mid - 1;
    }
    cout << ans;
    return 0;
}