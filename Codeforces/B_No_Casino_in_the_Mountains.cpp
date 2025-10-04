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
        int n, k; cin >> n >> k;
        vector<int> v(n);
        for(int i = 0; i < n; i++) cin >> v[i];
        int ans = 0;
        int j = 0;
        for(int i = 0; i < n; ){
            int cnt = 0;
            while(v[i] == 0 and i < n){
                cnt++; i++;
                if(cnt == k) break;
            }
            if(cnt == k) ans++;
            i++;
        }
        cout << ans << endl;
    }
    
    return 0;
}