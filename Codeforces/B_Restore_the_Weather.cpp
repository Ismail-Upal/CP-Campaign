#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
//-------------------------------------------
int32_t main()
{   
    opt();
    
    tc{
        int n, k; cin >> n >> k;
        map<ll, deque<int>> mp;

        vector<int> a(n), b(n), v(n);
        for(int i = 0; i < n; i++) cin >> a[i]; 
        v = a;
        for(int i = 0; i < n; i++) cin >> b[i];
        sort(a.begin(), a.end()); sort(b.begin(), b.end());
        for(int i = 0; i < n; i++){
            mp[a[i]].push_back(b[i]);
        }
        // for(auto i : mp) sort(i.second.rbegin(), i.second.rend());
        for(int i = 0; i < n; i++){
            cout << mp[v[i]].front() << " ";
            mp[v[i]].pop_front();
        }
        cout << endl;
    }
    
    return 0;
}