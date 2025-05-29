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
        int n, m, k; cin >> n >> m >> k;
        if(m == 0){cout << 0 << endl; continue;}
        int card = n / k;
        if(card >= m){
            cout << m << endl; continue;
        }
        
        int win_jok = card;
        m -= card;
        
        k--;
        if(((m + k - 1) / k) == card) cout << 0 << endl;
        else cout << card - (m + k - 1) / k << endl;
    }
    
    return 0;
}