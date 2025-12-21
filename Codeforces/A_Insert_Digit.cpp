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
        int n, d; cin >> n >> d;
        string s; cin >> s;
        int i = 0;
        string ans;
        while(i < n){
            if(s[i] - '0' >= d){
                ans += s[i];
            }
            else{
                ans += d + '0';
                break;
            }
            i++;
        }
        
        if(i < n)
        {  
            while(i < n){
                ans += s[i]; i++;
            } 
        }
        else ans += d + '0';

        cout << ans << endl;
    }
    
    return 0;
}