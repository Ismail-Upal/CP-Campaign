#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    int n, m; cin >> n >> m;
    vector<string> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    vector<int> vote(n, 0);

    for(int i = 0; i < m; i++){
        string s; cin >> s;
        int ok = 0;
        for(int j = 0; j < n; j++){
            if(v[j] == s){
                vote[j]++;
                ok = 1;
                break;
            }
        }
        if(ok) continue;

        int cnt = 0, cand = 0;
        for(int j = 0; j < n; j++){
            if(sz(v[j]) == sz(s)){
                int dif = 0;
                for(int k = 0; k < sz(s); k++){
                    if(v[j][k] != s[k]) dif++;
                }

                if(dif == 1) cand = j, cnt++;
            }
        }

        if(cnt == 1){
            vote[cand]++;
        }
    }

    for(int i = 0; i < n; i++) cout << vote[i] << endl;
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