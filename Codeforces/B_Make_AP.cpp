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
        int a, b, c; cin >> a >> b >> c;
      
        ll mid = (c + a) / 2;
        if((c + a) % 2 ==0 and mid % b == 0 and mid != 0 and mid >= b){
            cout << "YES" << endl; continue;
        }

        ll first = b - (c - b);
        if(first % a == 0 and first >= a and first != 0){
            cout << "YES" << endl; continue;
        }

        ll last = b + (b - a);
        if(last % c == 0 and last >= c and last != 0){
            cout << "YES" << endl; continue;
        }

        cout << "NO" << endl;
    }
    
    return 0;
}