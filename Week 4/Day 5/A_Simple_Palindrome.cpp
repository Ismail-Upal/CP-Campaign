#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
template<typename T> using pbds=tree<T,null_type,less_equal<T>,rb_tree_tag,tree_order_statistics_node_update>;
//p.order_of_key(x), p.find_by_order(idx)
#define ll long long
#define dl double
#define endl "\n"
#define Y cout << "YES" << endl
#define N cout << "NO" << endl
#define tc int t;cin>>t;while(t--)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve(){
    int n; cin>>n;
    string s;
    string t="aeiou";
    int j=0;
    for(int i=0; i<n; i++){
        s.push_back(t[j]);
        j++;
        if(j==5)j=0;
    }
    sort(s.begin(), s.end());
    cout<<s<<endl;
}
int main()
{
    optimize();
    tc{
        solve();
    }
    return 0;
}