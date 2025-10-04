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
    
    tc{
        int m, s; cin >> m >> s;
        vector<int> v(m);
        for(int i = 0; i < m; i++) cin >> v[i];

        int sum = accumulate(v.begin(), v.end(), 0);
        sum += s;
        sort(v.begin(), v.end());

        
        for(int i = 0, j = 1; i < m; i++){
            while(j != v[i]){
                s -= j;
                v.push_back(j); j++;
            }
            j++;
        }
        if(s < 0){
            cout << "NO" << endl;
            continue;
        }
        int j = sz(v) + 1;
        while(s >= j){
            s -= j; j++;
        }

        if(s == 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}