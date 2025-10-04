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
        vector<int> v(n), mx(n), mn(n);
        for(int i = 0; i < n; i++) cin >> v[i];
        mn[0] = v[0];
        for(int i = 1; i < n; i++){
            mn[i] = min(v[i], mn[i - 1]);
        }
        mx[n - 1] = v[n - 1];
        for(int i = n - 2; i >= 0; i--){
            mx[i] = max(v[i], mx[i + 1]);
        }

        for(int i = 0; i < n; i++){
            if(v[i] != mx[i] and v[i] != mn[i]) cout << 0 ;
            else cout << 1 ;
        }
        cout << endl;
    }
    
    return 0;
}