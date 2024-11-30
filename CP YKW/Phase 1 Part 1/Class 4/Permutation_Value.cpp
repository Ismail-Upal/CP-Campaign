#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t;cin>>t;while(t--)
//_____________________________________________
 
int main()
{
    optimize();
 
    tc{
        int n; cin >> n; 
        int i=2;
        while(i <= n){
            cout<<i<<' '; i+=2;
        }
        if(n&1)i--;
        else i-=3;
        while(i >= 1){
            cout << i << ' '; i-=2;
        }
        cout<<endl;
    }
 
    return 0;
}