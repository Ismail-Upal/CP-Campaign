#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t;cin>>t;while(t--)
//-------------------------------------------
 
int32_t main()
{   
    opt();
 
    tc{
        string s, a, b; cin >> s >> a >> b;
        map<char, int>mp;
        for(int i = 0; i < 26; i++){
            mp[s[i]] = i;
        }
        if(a == b){
            cout << "=" << endl; continue;
        }
        int i = 0, j = 0, ok = 1;
        while(i < sz(a) or j < sz(b)){
            if(mp[a[i]] > mp[b[j]]){
                ok = 1; break;
            }
            else if(mp[a[i]] < mp[b[j]]){
                ok = 2; break;
            }
            else{
                if(i == sz(a)){
                    ok = 1; break;
                }
                else if(j == sz(b)){
                    ok = 2; break;
                }
                else i++, j++;
            }
        }
        if(ok == 1) cout << ">" << endl;
        else cout << "<" << endl;
    }
    
    return 0;
}