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
        string a; cin >> a;
        for(int i = 0; i < sz(a); i++){
            if(a[i] == 'p') a[i] = 'q';
            else if(a[i] == 'q') a[i] = 'p';
        }
        reverse(a.begin(), a.end());
        cout << a << endl;
    }
    
    return 0;
}