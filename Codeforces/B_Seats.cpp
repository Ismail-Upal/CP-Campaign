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
        int zro = 0, ans = 0;
        int one = count(s.begin(), s.end(), '1');
        if(!one){
            zro = count(s.begin(), s.end(), '0');
            cout << (zro + 3 - 1) / 3 << endl;
            continue;
        }

        int l = 0, r = 0;
        if(s[0] == '0') l = 1;
        if(s[n - 1] == '0') r = 1;

        for(int i = 0; i < n; i++){
            if(s[i] == '0') zro++;
            else{
                if(l){
                    if(zro > 1){
                        ans += zro / 3;
                        zro = zro % 3;
                        if(zro == 2) ans++;    
                    }
                    l = 0;
                }
                else{
                    ans += zro / 3;
                }

                zro = 0;
            }
        }
        if(r){
            ans += zro / 3;
            zro = zro % 3;
            if(zro == 2) ans++; 
        }

        cout << ans + one << endl;
    }
    
    return 0;
}