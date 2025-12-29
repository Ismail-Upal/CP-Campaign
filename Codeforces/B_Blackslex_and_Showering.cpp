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
        
        int ans = 1e9, sum = 0;
        for(int i = 0; i < n - 1; i++){
            sum += abs(v[i] - v[i + 1]);
        }

        for(int i = 0; i < n; i++){
            int s = sum;
            if(i == 0){
                s -= abs(v[i] - v[i + 1]);
            }
            else if(i == n - 1){
                s -= abs(v[i] - v[i - 1]);
            }
            else{
                s -= abs(v[i] - v[i - 1]);
                s -= abs(v[i] - v[i + 1]);
                s += abs(v[i - 1] - v[i + 1]);
            }
            ans = min(ans, s);
        }
        
        cout << ans << endl;
    }
    
    return 0;
}