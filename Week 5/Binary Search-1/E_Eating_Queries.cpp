//https://codeforces.com/problemset/problem/1676/E
#include<bits/stdc++.h>
using namespace std;
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
        int n,q; cin>>n>>q;
        vector<int>v(n);
        for(int &i:v)cin>>i;
        vector<int>pref(n);
        sort(v.rbegin(),v.rend() );
        pref[0]=v[0];
        for(int i=1;i<n;i++){
            pref[i]=pref[i-1]+v[i];
        }
        
        while(q--){
            int x; cin>>x;
            int up=lower_bound(pref.begin(), pref.end(), x)-pref.begin();
            
            if(up>=n)cout<<-1<<endl;
            else cout<<up+1<<endl;
        }
    }
    return 0;
}