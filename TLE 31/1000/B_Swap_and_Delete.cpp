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
        string s; cin >> s;
        int zro = 0, one = 0;
        for(int i = 0; i < sz(s); i++){
            if(s[i] == '1') one++;
            else zro++;
        }
        int i = 0;
        for( ; i < sz(s); i++){
            if(s[i] == '1' and zro > 0) zro--;
            else if(s[i] == '0' and one > 0) one--;
            else break;
        }
        
        int inval = 0, ans = 0;
        for( ; i < sz(s); i++){
            if(zro == 0){
                if(s[i] == '0' and one > 0) one--, inval++;
                if(s[i] == '1' and inval == 0) ans++;
                if(s[i] == '1' and inval > 0) inval--;
            }
            else if(one == 0){
                if(s[i] == '1' and zro > 0) zro--, inval++;
                if(s[i] == '0' and inval == 0) ans++;
                if(s[i] == '0' and inval > 0) inval--; 
            }
        }
        cout << ans + inval << endl;
    }
    
    return 0;
}