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
        int q; cin >> q;
        deque<int> dq;
        while(q--){
            int op; cin >> op;
            if(op == 1){
                dq.push_front(dq[sz(dq) - 1]);
                dq.pop_back();
            }
            if(op == 2){
                
            }
            if(op == 3){
                int k; cin >> k;    
                dq.push_back(k);
            }
        }
    }
    
    return 0;
}