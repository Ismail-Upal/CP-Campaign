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
int main()
{
    optimize();
    string s; cin>>s;
    string a;
    int l=0,r=0;
    vector<string>ans;
    for(int i=0;i<s.size(); i++){
        if(s[i]=='L')l++;
        else r++;
        a.push_back(s[i]);
        if(l==r){
            ans.push_back(a);
            a="";
            l=0,r=0;
        }
    }
    cout<<ans.size()<<endl;
    for(auto i:ans)cout<<i<<endl;
    return 0;
}