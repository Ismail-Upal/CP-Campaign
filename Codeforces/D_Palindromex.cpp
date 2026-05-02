#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()

struct MEXTracker {
    map<int, int> mp;
    int current_mex = 0;

    void add(int x) {
        mp[x]++;
        while (mp[current_mex] > 0) current_mex++;
    }

    void remove(int x) {
        mp[x]--;
        if (x < current_mex && mp[x] == 0) current_mex = x;
    }

    int get_mex() {
        return current_mex;
    }

    void reset() {
        mp.clear();
        current_mex = 0;
    }
};

void Solve(){
    int n; cin >> n;
    n = 2 * n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    MEXTracker mex;

    int ans = 0;
    for(int i = 0; i < n - 1; i++){
        int l = i, r = i + 1;
        while(l >= 0 and r < n and v[l] == v[r]){
            mex.add(v[r]);
            ans = max(ans, mex.get_mex());
            l--, r++;
        }
        i = r - 1;
        mex.reset();
    }
    for(int i = 0; i < n; i++){
        int l = i - 1, r = i + 1;
        mex.add(v[i]);
        ans = max(ans, mex.get_mex());
        while(l >= 0 and r < n and v[l] == v[r]){
            mex.add(v[r]);
            ans = max(ans, mex.get_mex());
            l--, r++;
        }
        i = r - 1;
        mex.reset();
    }
    mex.reset();
    cout << ans << endl;
}

int main()
{   
    fast;
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++){
        Solve();
    }
    
    return 0;
}