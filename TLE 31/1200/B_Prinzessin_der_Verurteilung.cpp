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
        int n; cin >> n;
        string s; cin >> s;
        set<string> v;
     
        for(int i = 0; i < sz(s); i++){
            string t = "";
            for(int j = 0; j < 6 and i + j < sz(s); j++){
                t += s[i + j];
                v.insert(t);
            }
        }

        string ans;
        for(int i = 1; i < 4; i++){
            string t(i, 'a');
            int ok = 0;
            while(1){
                if(v.count(t) == 0){
                    cout << t << endl; ok = 1; break;
                } 
                int j = i - 1;
                while(j >= 0 and t[j] == 'z'){
                    t[j] = 'a'; j--;
                }
                if(j < 0) break;
                t[j]++;
            }
            if(ok) break;
        }
    }
    
    return 0;
}