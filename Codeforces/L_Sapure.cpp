#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc ll t; cin >> t; for (ll _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------

int main()
{   
    opt();
    
    ll n, K, m; cin >> n >> K >> m;

    string s; cin >> s;
    vector<pair<ll, ll>> fd(m + 1);
    for(ll i = 1; i <= m; i++){
        cin >> fd[i].first >> fd[i].second;
    }
    map<pair<ll, ll>, ll> mp;
    deque<pair<ll, ll>> len;
    ll i = 1, j = 1, k = 1;
    mp[{i, j}] = 1;
    len.push_back({i, j});

    bool alive = 1;

    for(auto c : s){
        if(c == 'L') j--;
        if(c == 'R') j++;
        if(c == 'U') i--;
        if(c == 'D') i++;

        if(j == 0) j = n;
        if(j == n + 1) j = 1;
        if(i == 0) i = n;
        if(i == n + 1) i = 1;

        if(k <= m and fd[k].first == i and fd[k].second == j){
            k++; 
        } 
        else{
            mp[{len.back().first, len.back().second}] = 0;
            len.pop_back();
        }

        if(mp[{i, j}]){
            alive = 0; break;
        }
        mp[{i, j}] = 1;
        len.push_front({i, j});
        
    }

    if(alive) cout << "ALIVE " << sz(len);
    else cout << "DEAD";

    return 0;
}
