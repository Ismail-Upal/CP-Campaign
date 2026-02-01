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
        string s; cin >> s;
        reverse(s.begin(), s.end());
        int z1 = find(s.begin(), s.end(), '0') - s.begin();
        int z2 = find(s.begin() + z1 + 1, s.end(), '0') - s.begin();
        int zz = z1 + z2 - z1 - 1 ;

        int f = find(s.begin() + z1 + 1, s.end(), '5') - s.begin();
        int fz = z1 + f - z1 -1;

        int ff = find(s.begin(), s.end(), '5') - s.begin();
        int t = find(s.begin() + ff + 1, s.end(), '2') - s.begin();
        int tf = ff + t - ff - 1;

        int sv = find(s.begin() + ff + 1, s.end(), '7') - s.begin();
        int sf = ff + sv - ff - 1;

        cout << min({zz, fz, tf, sf}) << endl;
    }
    
    return 0;
}