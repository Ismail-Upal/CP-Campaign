#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
using i128 = __int128_t;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------

int32_t main()
{   
    opt();
    
    int n, k; cin >> n >> k;
    string s; cin >> s;
    s += '.';

    int cnto = count(s.begin(), s.end(), 'o');

    for(int i = 0; i <= n; i++){
        if(s[i] != '?') continue;
        if(s[i - 1] == 'o') s[i] = '.';
        if(s[i + 1] == 'o') s[i] = '.';
    }
    
    if(cnto == k){
        for(int i = 0; i <= n; i++){
            if(s[i] == '?') s[i] = '.';
        } 
        s.pop_back();
        cout << s ; 
        return 0;
    }


    int m = 0, cnt = 0;
    for(int i = 0; i <= n; i++){
        if(s[i] == '?') cnt++;
        else{
            m += ((cnt + 1) / 2);
            cnt = 0;
        }
    }

    if(m + cnto == k){
        cnt = 0;
        for(int i = 0; i <= n; i++){
            if(s[i] == '?') cnt++;
            else if(cnt % 2){
                for(int j = i - 1; j >= 0; j--){
                    if(s[j] != '?') break;
                    if(s[j + 1] == 'o') s[j] = '.';
                    else s[j] = 'o'; 
                }
                cnt = 0;
            }
        }
    }
    
    s.pop_back();

    cout << s;
    
    return 0;
}