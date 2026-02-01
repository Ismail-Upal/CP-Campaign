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
        vector<int> v(n);
        for(int i = 0; i < n; i++) cin >> v[i];
        int mx = n, mn = 1;
        int l = 0, r = n - 1, L = -1, R = -1;
        while(l < r){
            if(v[l] != mx and v[r] != mx and v[l] != mn and v[r] != mn){
                L = l + 1, R = r + 1;
                break;
            }
            if(v[l] == mx){
                l++; mx--;
            }
            else if(v[l] == mn){
                l++; mn++;
            }
            if(v[r] == mx){
                r--; mx--;
            }
            else if(v[r] == mn){
                r--; mn++;
            }
        }
        if(L == -1 or R == -1) cout << -1 << endl;
        else cout << L << " " << R << endl;
    }
    
    return 0;
}