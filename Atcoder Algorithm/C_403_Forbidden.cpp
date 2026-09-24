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
    
    int n, m, q; cin >> n >> m >> q;
    map<int, set<int>> mp;
    map<int, int> all;

    while(q--){
        int t; cin >> t;
        if(t == 1){
            int x, y; cin >> x >> y;
            mp[x].insert(y);
        }
        else if(t == 2){
            int x; cin >> x;
            all[x] = 1;
        }
        else if(t == 3){
            int x, y; cin >> x >> y;
            if(all[x]){
                cout << "Yes" << endl;
            }
            else{
                if(mp[x].find(y) != mp[x].end()) cout << "Yes" << endl;
                else cout << "No" << endl;
            }
        }
    }
    
    return 0;
}