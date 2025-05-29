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
        int sum = (2 * n) * ((2 * n) + 1) / 2;
        map<int, int> mp;
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                int x; cin >> x;
                if(!mp[i + j]) sum -= x;
                mp[i + j] = x;
            }
        }
        mp[1] = sum;
        for(int i = 1; i <= 2 * n; i++) cout << mp[i] << " ";
        cout << endl;
    }
    
    return 0;
}