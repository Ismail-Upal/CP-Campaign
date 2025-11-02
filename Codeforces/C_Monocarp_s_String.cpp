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
        int n; cin >> n;
        string s; cin >> s;

        int A = count(s.begin(), s.end(), 'a');
        int B = count(s.begin(), s.end(), 'b');
        int dif = abs(A - B);
        if(dif == 0){
            cout << 0 << endl; continue;
        }

        vector<int> v(n + 1);
        for(int i = 1; i <= n; i++){
            if(s[i - 1] == 'a'){
                if(A > B) v[i] = 1;
                else v[i] = -1;
            }
            else{
                if(A < B) v[i] = 1;
                else v[i] = -1;
            }
        }

        unordered_map<int, vector<int>> mp;
        mp[0].push_back(0);

        for(int i = 1; i <= n; i++){
            v[i] = v[i] + v[i - 1];
        }

        int ans = 1e9;  

        for(int i = 1; i <= n; i++){
            int need = v[i] - dif; 
            if(sz(mp[need])){
                ans = min(ans, i - mp[need].back()); 
            }
            mp[v[i]].push_back(i);
        }
        if(ans == n) ans = -1;
        cout << ans << endl;
    }
    
    return 0;
}