#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    int n; cin >> n;
    vector<pair<int, int>> v(n + 1);
    for(int i = 1; i <= n; i++){
        cin >> v[i].second >> v[i].first;
    }

    sort(v.begin() + 1, v.end());

    vector<int> mx_suff(n + 2, 0);
    for(int i = n; i >= 1; i--){
        mx_suff[i] = max(mx_suff[i + 1], v[i].second);
    }


    int q; cin >> q;
    while(q--){
        int t; cin >> t;
        int l = 1, r = n, mid, ans = -1;
        while(l <= r){
            mid = l + (r - l) / 2;
            if(t < v[mid].first){
                ans = mid;
                r = mid - 1;
            }
            else l = mid + 1;
        }

        cout << mx_suff[ans] << endl;
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