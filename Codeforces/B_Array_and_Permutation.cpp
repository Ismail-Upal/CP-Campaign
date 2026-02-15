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
        map<int, int> mp;
        vector<int> a(n + 1);
        for(int i = 1; i <= n; i++){
            cin >> a[i];
            mp[a[i]] = i;
        }
        vector<int> b(n + 1);
        int ok = 1;
        for(int i = 1; i <= n; i++){
            cin >> b[i];
        }
        int j = mp[b[1]];
        for(int i = 1; i <= n; i++){
            if(mp[b[i]] < j) ok = 0;
            j = mp[b[i]];
        }

        if(ok) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}