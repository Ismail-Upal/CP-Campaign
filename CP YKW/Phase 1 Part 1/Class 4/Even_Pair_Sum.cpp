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
        int a, b; cin >> a >> b;
        cout<<(((a/2)*1LL*(b/2)) + (((a+2-1)/2)* 1LL * ((b+2-1)/2))) <<endl;
    }
 
    return 0;
}