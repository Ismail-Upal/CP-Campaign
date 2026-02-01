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
        int n, s, x; cin >> n >> s >> x;
        vector<int> v(n);
        ll sum = 0;
        for(int i = 0; i < n; i++){
            cin >> v[i];
            sum += v[i];
        }
        if(sum <= s and (s - sum) % x == 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}