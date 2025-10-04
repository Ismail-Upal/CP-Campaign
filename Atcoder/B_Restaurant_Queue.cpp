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
    
    deque<int> dq;
    int q; cin >> q;
    while(q--){
        int t; cin >> t;
        if(t == 1){
            int x; cin >> x;
            dq.push_back(x);
        }
        if(t == 2){
            cout << dq.front() << endl;
            dq.pop_front();
        }
    }
    
    return 0;
}