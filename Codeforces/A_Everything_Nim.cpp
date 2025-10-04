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
        vector<int> v(n);
        for(int i = 0; i < n; i++) cin >> v[i];
        sort(v.begin(), v.end());
        int ans = 0, sub = 0;
        for(int i = 0; i < n; i++){
            v[i] -= sub;
            if(v[i]<= 0) continue;
            sub += v[i];
            v[i] -= sub;
            ans++;
        }
        if(ans % 2) cout << "Alice" << endl;
        else cout << "Bob" << endl;
    }
    
    return 0;
}

