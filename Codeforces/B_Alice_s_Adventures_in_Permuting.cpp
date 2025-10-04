#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t;cin>>t;while(t--)
//_____________________________________________
 
int main()
{
    optimize();
 
    tc{
        
            ll n, b, c; cin >> n >> b >> c; 
            if(b == 0){
                if(c == n-2 or c == n-1){
                    cout << n - 1 << endl;
                }
                else if(c < n - 2){
                    cout << -1 << endl;
                }
                else{
                    cout << n << endl;
                }
                continue;
            }
            ll ans = n - max((n - c + b - 1) / b, 0LL);
            cout << ans << endl;
        
    
    }
 
    return 0;
}