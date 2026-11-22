#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    int n; cin >> n;
    vector<int> v(n + 1);

    for(int i = 1; i <= n; i++){
        cin >> v[i];
    }

    map<int, deque<int>> mp;
    for(int i = 2, cnt = 1; i <= n; i++){
        if(v[i] == v[i - 1]) cnt++;
        else{
            mp[v[i - 1]].push_back(cnt);
            cnt = 1;
        }

        if(i == n){
            mp[v[i]].push_back(cnt);
        }
    }

    for(int i = 1; i <= n; ){
        int cnt = mp[v[i]].front();
        for(int j = 1; j <= cnt; j++){
            int l = j, r = cnt - j + 1;
            if(cnt == n) cout << 0 << " ";
            else if(i == 1) cout << r << " ";
            else if(i + cnt - 1 == n) cout << l << " ";
            else cout << min(l, r) << " "; 
        }

        mp[v[i]].pop_front();
        i += cnt;
    }
}

int main()
{   
    fast;
    int t = 1;
    // cin >> t;
    for(int i = 1; i <= t; i++){
        Solve();
    }
    
    return 0;
}