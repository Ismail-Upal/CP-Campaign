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
        vector<int> v(n + 1);
        for(int i = 1; i <= n; i++) cin >> v[i];

        int ans = INT_MAX;

        for(int i = 1; i <= n; i++){
            if((i < n and abs(v[i] - v[i + 1]) <= 1) or (i > 1 and abs(v[i] - v[i - 1]) <= 1)){
                ans = 0; break;
            }

            int x = v[i] - 1, y = v[i] + 1;


            int mov = -1;
            int j = i - 1;
            while(j > 1){
                int l = v[j - 1], r = v[j];
                if(l > r) swap(l, r);
                if((l <= x and x <= r) or (l <= y and y <= r) or (l <= v[i] and v[i] <= r)){
                    mov = i - j;
                    break;
                }
                j--; 
            }
            if(mov != -1) ans = min(ans, mov);

            mov = -1;
            j = i + 1;
            while(j < n){
                int l = v[j], r = v[j + 1];
                if(l > r) swap(l, r);
                if((l <= x and x <= r) or (l <= y and y <= r) or (l <= v[i] and v[i] <= r)){
                    mov = j - i; break;
                }
                j++; 
            }
            if(mov != -1) ans = min(ans, mov);
        }

        if(ans == INT_MAX) ans = -1;
        cout << ans << endl;
    }
    
    return 0;
}