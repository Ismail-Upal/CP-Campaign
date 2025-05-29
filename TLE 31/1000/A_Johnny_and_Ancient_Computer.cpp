#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t;cin>>t;while(t--)
//-------------------------------------------
 
int32_t main()
{   
    opt();
 
    tc{
        ll a, b; cin >> a >> b;
        if(a < b) swap(a, b);
        ll div = a / b;
        if(a%b) cout << - 1 << endl;
        else{
            ll cnt = 0;
            while(div % 8 == 0){
                div /= 8;
                cnt ++;
            }
            while(div % 4 == 0){
                div /= 4; cnt ++;
            }
            while(div % 2 == 0){
                div /= 2; cnt ++;
            }
            if(div > 1) cout << -1 << endl;
            else cout << cnt << endl;
        }
    }
    
    return 0;
}