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
        int n; cin >> n;
        vector<int> v(2 * n);
        for(int i = 0; i < 2 * n; i++) cin >> v[i];

        priority_queue<int, vector<int>, greater<int>> pq;
        for(int i = 0; i < 2 * n; i++){
            int sz = (i + 1 + 2 - 1) / 2;
            pq.push(v[i]);
            if(sz(pq) > sz) pq.pop();
        }
        ll sum = 0;
        while(!pq.empty()){
            sum += pq.top();
            pq.pop();
        }
        cout << sum << endl;
    }
    
    return 0;
}