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
        ll m, a, b, c; cin >> m >> a >> b >> c;
        ll row1, row2;
        if(m >= a) row1 = a;
        else row1 = m;

        if(m >= b) row2 = b;
        else row2 = m;

        ll left1 = m - row1;
        ll left2 = m - row2;

        if(left1 > 0){
            if(c <= left1) row1 += c, c = 0;
            else row1 += left1, c -= left1;
        }

        if(left2 > 0){
            if(c <= left2) row2 += c;
            else row2 += left2;
        }

        cout << row1 + row2 << endl;
    }
    
    return 0;
}