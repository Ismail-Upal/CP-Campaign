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
    tc {
        int n; cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++) cin >> v[i];
        
        sort(v.rbegin(), v.rend());
        int ans = 0;
        
        for(int j = 0; j < n; j++){
            for(int k = j + 1; k < n; k++){
                int sum = v[j] + v[k];
                for(int i = 0; i < n; i++){
                    if(i != j and i != k){
                        ans = max(ans, v[i] % sum);
                        break;
                    }
                }
            }
        }

        cout << ans << endl;
    }
    return 0;
}
