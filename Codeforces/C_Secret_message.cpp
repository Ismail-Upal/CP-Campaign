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
        int n, k; cin >> n >> k;
        map<int, set<char>> mp;     
        
        while(k--){
            string s; cin >> s;
            for(int i = 1; i <= n; i++){
                mp[i].insert(s[i - 1]);
            }
        }

        vector<int> div;
        for(int i = 1; i * i <= n; i++){
            if(n % i == 0){
                div.push_back(i);
                if(i != (n / i)) div.push_back(n / i);
            }
        }
        sort(div.begin(), div.end());
        
        string ans = "";
        int x;
        for(auto d : div){
            int ok = 1;
            string res = "";

            for(int i = 1; i <= d; i++){
                set<char> se = {mp[i].begin(), mp[i].end()};
                map<char, int> del;

                for(int j = i + d; j <= n; j += d){
                    for(char c : se){
                        if(mp[j].find(c) == mp[j].end()){
                            del[c] = 1;
                        }
                    }
                }
                    
                for(auto c : se){
                    if(!del[c]){
                        res += c;
                        break;
                    }
                }
            }

            if(sz(res) == d){
                x = d; 
                ans = res; 
                break;
            }
        }

        for(int i = x; i <= n; i += x) cout << ans;
        cout << endl;
    }
    
    return 0;
}