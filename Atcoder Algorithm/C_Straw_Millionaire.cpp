#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    int n, m; cin >> n >> m;
    vector<set<int>> a(n + 1);
    for(int i = 1; i <= m; i++){
        int x, y; cin >> x >> y;
        a[x].insert(y);
    }

    set<int> se = {1}, curr = {1};

    while(!curr.empty()){
        set<int> nw;
        for(auto i : curr){
            for(auto j : a[i]){
                if(se.find(j) == se.end()) nw.insert(j);
                se.insert(j);
            }
        }
        curr = nw;
    }
    cout << sz(se);
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