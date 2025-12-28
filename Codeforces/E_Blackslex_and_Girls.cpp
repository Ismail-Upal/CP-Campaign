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
        int n, x, y; cin >> n >> x >> y;
        string s; cin >> s;
        vector<int> v(n);
        for(int i = 0; i < n; i++) cin >> v[i];

        ll loa = 0, lob = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == '0'){
                loa += (v[i] / 2) + 1;
            }
            else{
                lob += (v[i] / 2) + 1;
            }
        }
        ll sum = accumulate(v.begin(), v.end(), 0LL);
        if(loa > x or lob > y or x + y < sum){
            cout << "NO" << endl; continue;
        }


        for(int i = 0; i < n; i++){
            ll nda = x - loa;
            ll ndb = y - lob; 
            if(s[i] == '0'){
                loa += nda;
                ll tot = nda + (v[i] / 2) + 1;
                lob += min(tot - 1, ndb);
            }
            else{
                lob += ndb;
                ll tot = ndb + (v[i] / 2) + 1;
                loa += min(tot - 1, nda);
            }
        }
        

        if(loa == x and lob == y) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}