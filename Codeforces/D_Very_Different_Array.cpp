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
        int n, m; cin >> n >> m;
        vector<int> a(n), b(m);
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < m; i++) cin >> b[i];

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        ll ans = 0, l = 0, r = m - 1;

        for(int i = 0, j = n - 1; i <= j; ){
            int x = max(abs(a[i] - b[l]), abs(a[i] - b[r]));
            int y = max(abs(a[j] - b[l]), abs(a[j] - b[r]));
            if(x > y){
                if(abs(a[i] - b[l]) > abs(a[i] - b[r])){
                    ans += abs(a[i] - b[l]);
                    l++;
                }
                else{
                    ans += abs(a[i] - b[r]);
                    r--;
                }
                i++;
            }
            else{
                if(abs(a[j] - b[l]) > abs(a[j] - b[r])){
                    ans += abs(a[j] - b[l]);
                    l++;
                }
                else{
                    ans += abs(a[j] - b[r]);
                    r--;
                }
                j--;
            }
        }

        cout << ans << endl;
    }
    
    return 0;
}