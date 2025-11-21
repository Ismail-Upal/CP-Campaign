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
        int mx = 0;
        for(int i = 0; i < n; i++){
            int d, t; cin >> d >> t;
            mx = max(mx, d / t);
            v[i] = mx;
        }
        for(int i = 0; i < n; i++){
            if(v[i] == mx) {
                mx = i + 1;
                break;
            }
        }
        cout << mx << endl;
    }
    
    return 0;
}