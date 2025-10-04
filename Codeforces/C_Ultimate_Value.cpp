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
        vector<ll> v(n + 1);
    
        ll oddsum = 0, evnsum = 0;

        for(int i = 1; i <= n; i++){
            cin >> v[i];
            if(i % 2){
                oddsum += v[i];
            }
            else{
                evnsum += v[i];
            }
        }
        if(n == 1){
            cout << oddsum << endl; continue;
        }

        ll ans1 = oddsum - evnsum;

        if(v[1] == v[n]) ans1 += n - 1;
        else if(n % 2) ans1 += n - 1;
        else ans1 += n - 2;

        ll ans2 = oddsum - evnsum, ans3 = ans2;

        ll x = -1e18;
        for(int i = 1; i <= n; i++){
            if(i % 2 == 0){
                ll y = i - (2 * v[i]);
                ans2 = max(ans2, ans3 + y + x);
            }
            else{
                x = max(x, i - (2 * v[i]));
            }
        }

        ll y = -1e18;
        for(int i = 1; i <= n; i++){
            if(i % 2){
                ll x = (2 * v[i]) + i;
                ans2 = max(ans2, ans3 + y - x);
            }
            else{
                y = max(y, (2 * v[i] + i));
            }
        }
        cout << max(ans2, ans1) << endl;
    }
    
    return 0;
}