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
        set<int> se;
        for(int i = 0; i < n; i++){
            if(s[i] == '0') se.insert(i + 1);
        }

        int ans = 0;
        while(!se.empty()){
            int j = *se.begin();
            int p = j;
            for(int i = 2; i * i <= j; i++){
                if(j % i == 0){
                    p = i; break;
                }
            }
            
            vector<int> v;
            for(auto i : se){
                if(i % p == 0) v.push_back(i);
            }
            
            for(int i : v){
                se.erase(se.find(i));
                ans += p;
            }
        }
        cout << ans << endl;
    }
    
    return 0;
}