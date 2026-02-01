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
        int n; cin >> n;
        string s; cin >> s;
        int o = 0, c = 0;
        for(char i : s){
            if(i=='('){
                o++;
            }
            else{
                if(o > 0) o--;
                else c++;
            }
        }
        cout << (o+c) / 2 << endl;
    }
    
    return 0;
}