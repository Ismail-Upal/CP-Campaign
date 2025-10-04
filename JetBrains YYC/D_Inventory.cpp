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
    
    int n; cin >> n;
    vector<int> v(n + 1);
    map<int, int> mp;
    queue<int> q;

    for(int i = 1; i <= n; i++){
        int x; cin >> x; v[i] = x;
        mp[x]++;
    }
    for(int i = 1; i <= n; i++){
        if(!mp[i]) q.push(i);
    }

    for(int i = 1; i <= n; i++){
        if(v[i] > n){
            cout << q.front() << " ";
            q.pop();
        }
        else{
            if(mp[v[i]] > 1){
                cout << q.front() << " ";
                q.pop();
                mp[v[i]]--;
            }
            else cout << v[i] << " " ;
        }
    }


    return 0;
}