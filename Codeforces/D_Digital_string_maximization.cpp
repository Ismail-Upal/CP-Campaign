#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t;cin>>t;while(t--)
//-------------------------------------------
 
int32_t main()
{	opt();
 
    tc{
        string s; cin >> s;
        for(int i=1; i<sz(s); i++){
            int j = i;
            while(j > 0 and s[j]!='0' and s[j]-1 > s[j-1]){
                s[j] = s[j]-1;
                swap(s[j], s[j-1]);
                j--;
            }
        }
        cout << s << endl;
    }
 
    return 0;
}