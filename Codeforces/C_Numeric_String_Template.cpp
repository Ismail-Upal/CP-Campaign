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
    tc{
        int n; cin>>n;
        vector<int>v(n+1);
        for(int i=1;i<=n; i++)cin>>v[i];
        int m; cin>>m;
        while(m--){
            string s; cin>>s;
            if(n!=s.size()){N; continue;}
            map<int,char>mp1;
            map<char,int>mp2;
            s=" "+s;
            int f=1;
            for(int i=1;i<=n; i++){
                mp1[v[i]]=s[i];
                mp2[s[i]]=v[i];
            }
            for(int i=1;i<=n; i++){
                if(mp1[v[i]!=s[i]]  || mp2[s[i]]!=v[i]){
                    f=0;break;
                }
            }
            if(f==1)Y;
            else N;
        }
    }
    return 0;
}