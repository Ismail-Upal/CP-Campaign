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
        int n, m, k; cin >> n >> m >> k;
        vector<int> a(n);
        set<int> b;
        map<int, int> mpb;
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < m; i++){
            int x; cin >> x; 
            b.insert(x); 
            mpb[x]++;
        }

        set<int> se;
        unordered_map<int, int> mpse;

        int i = 0, j = 0;
        ll ans = 0, cnt = 0;

        while(j < n){
            if(b.find(a[j]) != b.end()){
                se.insert(a[j]); 
                mpse[a[j]]++;
                if(mpse[a[j]] <= mpb[a[j]]) cnt++;
            }
            if(j - i + 1 < m) j++;
            else if(j - i + 1 == m){
                if(cnt >= k) ans++;
                auto it = se.find(a[i]);
                if(it != se.end()){ 
                    if(mpse[a[i]] == 0) se.erase(se.find(a[i]));
                    mpse[a[i]]--;
                    if(mpse[a[i]] < mpb[a[i]]) cnt--;
                }
                i++;
                j++;
            }
        }

        cout << ans << endl;
    }
    
    return 0;
}