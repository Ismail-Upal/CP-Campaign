#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    int n; cin >> n;
    vector<int> a(n + 1), b(n + 1);
    for(int i = 1; i <= n; i++){
        cin >> a[i] >> b[i];
    }
    int m; cin >> m;
    int mp[12][12][28];
    memset(mp, 0, sizeof mp);
    vector<string> v(m + 1);

    for(int i = 1; i <= m; i++){
        cin >> v[i];
        int len = sz(v[i]);
        
        for(int j = 1; j <= len; j++){
            int c = v[i][j - 1] - '0';
            mp[len][j][c] = 1;
        }
    }


    for(int i = 1; i <= m; i++){
        if(sz(v[i]) != n) cout << "No" << endl;
        else{
            int ok = 1;
            
            for(int j = 1; j <= n; j++){
                int c = v[i][j - 1] - '0';
                if(!mp[a[j]][b[j]][c]) ok = 0;
            }

            if(ok) cout << "Yes" << endl;
            else cout << "No" << endl;
        }
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