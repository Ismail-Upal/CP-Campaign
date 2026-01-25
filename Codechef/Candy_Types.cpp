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
        vector<int> v(n + 1), mp(n + 1, 0);
        int mx = 1;
        for(int i = 1; i <= n; i++){
            cin >> v[i];
            mp[v[i]]++;
            if(mp[v[i]] > mp[mx]) mx = v[i];
            else if(mp[v[i]] == mp[mx]){
                mx = min(mx, v[i]);
            }
        }

        cout << mx << endl;
    }
    
    return 0;
}