#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------

int main()
{   
    opt();
    
    int n, m; cin >> n >> m;
    map<char, int> mp1, mp2;
    for(int i = 0; i < n; i++){
        char c; cin >> c; mp1[c]++;
    }
    for(int i = 0; i < m; i++){
        char c; cin >> c; mp2[c]++;
    }

    int q; cin >> q;
    while(q--){
        string r; cin >> r;
        int ok1 = 1, ok2 = 1;

        for(auto i : r){
            if(!mp1[i]) ok1 = 0;
            if(!mp2[i]) ok2 = 0;
        }

        if(ok1 - ok2 == 0) cout << "Unknown" << endl;
        else if(ok2) cout << "Aoki" << endl;
        else cout << "Takahashi" << endl;
    }
    
    return 0;
}