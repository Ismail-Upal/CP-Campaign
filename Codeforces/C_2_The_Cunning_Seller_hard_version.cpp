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
        ll n, k; cin >> n >> k;
        ll deal = 0, ball = n, cost = 0;
        while(ball > 0){
            ll K = 0, x = 0;
            while(ball >= ll(pow(3, K))){
                x = ll(pow(3, K));
                K++;
            }
            ball -= x;
            deal++;
            K--;
            cost += ll(pow(3, K + 1)) + K * (ll(pow(3, K - 1)));
        }
        if(k < deal){
            cout << -1 << endl; continue;
        }

        
    }
    
    return 0;
}