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
        int n; cin >> n ;
        map<int, int> mp;
        set<int> se;
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            mp[x]++;
            se.insert(x);
        }
        int ok = 1;
        if(mp[*se.begin()] == 1) ok = 0;
        else{
            int baki = 0, prev = 0;
            for(auto i : se){
                if(i == prev + 1){
                    mp[i] += baki;
                    if(mp[i] >= 2) baki = mp[i] - 2, mp[i] -= baki;
                }
                else{
                    int dif = i - prev;
                    if(dif > baki) ok = 0;
                    else{
                        mp[i] += baki - dif;
                    }
                }
                prev = i;
            }
            for(auto i : se){
                if(mp[i] % 2) ok = 0;
            }
            
        }
        if(ok) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    
    return 0;
}