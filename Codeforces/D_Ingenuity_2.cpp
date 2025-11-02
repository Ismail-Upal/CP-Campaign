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
        int x = 0, y = 0;
        int r = 0, l = 0, u = 0, d = 0;
        for(auto i : s){
            if(i == 'N') y++, u++;
            if(i == 'S') y--, d++;
            if(i == 'E') x++, r++;
            if(i == 'W') x--, l++;
        }

        if(x % 2 or y % 2){
            cout << "NO" << endl; 
            continue;
        }
        if(x == 0 and y == 0 and n == 2){
            cout << "NO" << endl;
            continue;
        }
        vector<char> ans(n, 'R');

        if(x == 0 and y == 0 and n > 2){
            int i = 0;
            if(u){
                while(i < n){
                    if(s[i] == 'N'){ans[i] = 'H'; break;}
                    i++;
                }i = 0;
                while(i < n){
                    if(s[i] == 'S'){ans[i] = 'H'; break;}
                    i++;
                }
            }
            else if(r){
                while(i < n){
                    if(s[i] == 'E'){ans[i] = 'H'; break;}
                    i++;
                }i = 0;
                while(i < n){
                    if(s[i] == 'W'){ans[i] = 'H'; break;}
                    i++;
                }
            }

            for(auto i : ans) cout << i ;
            cout << endl;
            continue;
        }

        r /= 2, l /= 2, u /= 2, d /= 2;
        for(int i = 0; i < n; i++){
            if(r > 0 and s[i] == 'E') ans[i] = 'H', r--;
            if(l > 0 and s[i] == 'W') ans[i] = 'H', l--;
            if(u > 0 and s[i] == 'N') ans[i] = 'H', u--;
            if(d > 0 and s[i] == 'S') ans[i] = 'H', d--;
        }

        for(auto i : ans) cout << i ;
        cout << endl;
    }
    
    return 0;
}