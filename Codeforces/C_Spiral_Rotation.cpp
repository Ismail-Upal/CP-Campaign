#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
template<typename T> using pbds=tree<T,null_type,less_equal<T>,rb_tree_tag,tree_order_statistics_node_update>;
//p.order_of_key(x), p.find_by_order(idx)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define dl double
#define endl "\n"
#define sz(x) (ll)(x).size()
#define Y cout << "YES" << endl
#define N cout << "NO" << endl
#define tc int t;cin>>t;while(t--)
void solve(){
    int n; cin>>n;
    char c[n+1][n+1];
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++)cin>>c[i][j];
    }
    for(int i=1; i<=n/2; i++){
        for(int j=1; j<=n; j++){
            c[j][n+1-i] = c[i][j];
        }
    }
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++)cout<<c[i][j]285268143	Oct/11/2024 12:38UTC+6	NasifIqbal	A - Cards with Numbers	C++17 (GCC 7-32)	Accepted	281 ms	5000 KB
        285267902	Oct/11/2024 12:35UTC+6	NasifIqbal	A - Cards with Numbers	C++17 (GCC 7-32)	Wrong answer on test 1	46 ms	100 KB
        285267610	Oct/11/2024 12:33UTC+6	NasifIqbal	A - Cards with Numbers	C++17 (GCC 7-32)	Wrong answer on test 1	31 ms	100 KB
        285267263	Oct/11/2024 12:29UTC+6	NasifIqbal	A - Cards with Numbers	C++17 (GCC 7-32)	Memory limit exceeded on test 1	280 ms	262100 KB
        285266948	Oct/11/2024 12:26UTC+6	NasifIqbal	A - Cards with Numbers	C++17 (GCC 7-32)	Runtime error on test 1	46 ms	0 KB
        285266805	Oct/11/2024 12:25UTC+6	NasifIqbal	A - Cards with Numbers	C++17 (GCC 7-32)	Memory limit exceeded on test 1	390 ms	262100 KB;
        cout<<endl;
    }
}
int main()
{
    optimize();
    
        solve();
    
    return 0;
}