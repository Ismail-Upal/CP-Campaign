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
        ll n; cin >> n;
        ll sum = 1, x = 0;
        for(ll i = 1; i < 31; i++){
            sum += (1 << i);
            if(n % sum == 0){
                x = n / sum;
                break;
            }
        }
        cout << x << endl;
    }
    
    return 0;
}

