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
        
        vector<int> suff(n + 4, 0);
        for(int i = 0; i < n; i++){
            suff[v[i] / 4]++;
        }
        for(int i = n; i >= 1; i--){
            suff[i] += suff[i + 1];
        }
        for(int i = 0; i < n; i++){
            for(int j = 1; j * j <= v[i]; j++){
                if(v[i] % j == 0){
                    int a = v[i] / 4;
                    if(j > a) suff[j]++;
                    if(j != v[i] / j and (v[i] / j) > a) suff[v[i] / j]++;
                }
            }
        }
        int ans = 0;
        for(int i = 1; i <= n; i++){
            if(suff[i] >= n - k) ans = max(ans, i);
        }
        cout << ans << endl;
    }
    
    return 0;
}