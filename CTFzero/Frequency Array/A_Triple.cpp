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
        int ans = -1;
        map<int, int> mp;
        while(n--){
            int x; cin >> x;
            mp[x]++;
            if(mp[x] >= 3) ans = x;
        }
        cout << ans << endl;
    }
    
    return 0;
}