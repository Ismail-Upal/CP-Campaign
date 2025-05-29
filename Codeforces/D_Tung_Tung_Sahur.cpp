#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------

int32_t main()
{   
    opt();
    
    tc{
        string p, s; cin >> p >> s;

        string a, b;
        char curr = 'z';
        for(auto i : p){
            if(i != curr){
                a.push_back(i);
                curr = i;
            }
        }
        curr = 'z';
        for(auto i : s){
            if(i != curr){
                b.push_back(i);
                curr = i;
            }
        }

        if(a != b){
            cout << "NO" << endl; continue;
        }


        vector<int> prefp, prefs;
        int cnt = 0;
        char cur = p[0]; 
        for(int i = 0; i < p.size(); i++){
            if(p[i] == cur) cnt++;
            else{
                prefp.push_back(cnt);
                cnt = 1;
                cur = p[i];
            }
        }
        prefp.push_back(cnt);

        cnt = 0;
        cur = s[0]; 
        for(int i = 0; i < s.size(); i++){
            if(s[i] == cur) cnt++;
            else{
                prefs.push_back(cnt);
                cnt = 1;
                cur = s[i];
            }
        }
        prefs.push_back(cnt);

        if(prefp.size() != prefs.size()){
            cout << "NO" << endl; continue;
        }

        int ok = 1;
        for(int i = 0; i < prefp.size(); i++){
            if(prefp[i] > prefs[i]){
                ok = 0; break;
            }
            else if(2 * prefp[i] >= prefs[i] and prefs[i] >= prefp[i]){
                ok = 1;
            }
            else{
                ok = 0; break;
            }
        }
        if(ok) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}