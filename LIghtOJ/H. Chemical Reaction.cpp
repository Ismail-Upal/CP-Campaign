#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    int n, m; cin >> n >> m;
    set<int> chem;
    for(int i = 1; i <= n; i++){
        int x; cin >> x; 
        chem.insert(x);
    }

    vector<vector<int>> react(m, vector<int> (3)) ;
    vector<int> mp(m, 0);

    for(int i = 0; i < m; i++){
        vector<int> v(3);
        cin >> v[0] >> v[1] >> v[2];
        react[i] = v;
    }

    while(1){
        int ok = 1;
        for(int i = 0; i < m; i++){
            if(mp[i]) continue;

            auto it1 = chem.find(react[i][0]);
            auto it2 = chem.find(react[i][1]);

            if(it1 != chem.end() and it2 != chem.end()){
                ok = 0;
                chem.insert(react[i][2]);
                mp[i] = 1;
            }
        }

        if(ok) break;
    }

    cout << sz(chem) << endl;
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