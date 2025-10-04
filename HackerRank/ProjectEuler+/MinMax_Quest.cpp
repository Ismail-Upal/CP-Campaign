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
    
    int q;cin >> q;
    int mx_num = -1, mn = INT_MAX;
    map<int, int> mp;
    while(q--){
        int t; cin >> t;
        if(t == 1){
            int x; cin >> x; 
            mp[x]++;
            if(mp[x] < mn){
                mx_num = x;
                mn = mp[x];
            }
            else if(mp[x] == mn){
                mx_num = max(mx_num, x);
            }
        }
        else{
            if(sz(mp) == 0) cout << "empty" << endl;
            else {
                cout << mx_num << endl;
                mp[mx_num] -= max(1, mn / 2);
                mn -= max(1, mn / 2);
            }
        }
    }
    
    return 0;
}