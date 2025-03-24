#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
//-------------------------------------------

int32_t main()
{   
    opt();
    
    tc{
        string a, b; cin >> a >> b;
        int ans = 0;
        
        map<char, int> mpa, mpb;
        for(auto i : a) mpa[i]++;
        for(auto i : b) mpb[i]++;

        for(auto i : b){
            if(mpb[i] > mpa[i]){
                ans = -1 ; break;
            }
        }

        if(ans == -1){
            cout << ans << endl; continue;
        }
        
        int i = 0, j = 0, ans = 0;
        while(j < sz(b)){
            if(a[i] != b[j]){
                ans += i + 1;
                a.erase(a[i]);
                mpa[a[i]]--;
            }
            else{
                if(mpa[a[i]] == mpb[b[j]]) continue;
                else{
                    a.erase(a[i]);

                }
            }
        }   
    }
    
    return 0;
}
