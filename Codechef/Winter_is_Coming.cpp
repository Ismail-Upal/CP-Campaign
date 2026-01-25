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
        int n, a, b; cin >> n >> a >> b;
        int ans = 0, on = 0;
        for(int i = 0; i < n; i++){
            int t; cin >> t;
            if(t >= a and t <= b) continue;
            else if(t >= a){
                if(on) on = 0;
            }
            else if(t <= b){
                if(!on) on = 1, ans++;
            }
        }
        cout << ans << endl;
    }
    
    return 0;
}