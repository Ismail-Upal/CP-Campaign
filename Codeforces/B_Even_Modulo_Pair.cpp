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
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
        cin >> a[i];
        }
        int m = min(n, 200);
        int x = -1, y = -1;
        for (int i = 0; i < m; i++) {
            for (int j = i + 1; j < m; j++) {
                if (a[j] % a[i] % 2 == 0) {
                x = a[i];
                y = a[j];
                break;
                }
            }
            if (x != -1) break;
        }
        if (x == -1) cout << -1 << '\n';
        else cout << x << " " << y << '\n';
    }
    
    return 0;
}