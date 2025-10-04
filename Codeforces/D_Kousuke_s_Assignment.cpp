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
        map<ll, ll> mp;
        mp[0]++;
        ll sum = 0, ans = 0;
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            sum += x;
            mp[sum]++;
            if(mp[sum] == 2){
                ans++;
                mp.clear();
                mp[sum]++;
            }
        }
        cout << ans << endl;
    }
    
    return 0;
}