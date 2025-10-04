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
        vector<ll>v(16), ans(16);
        for(ll &i:v)cin>>i;
        ans=v;       
        sort(v.begin(), v.end());
        ll num=0;
        for(int i=0;i<16;i++){
            if(i>=1 && i<=2)num=1;
            if(i>=3 && i<=6)num=2;
            if(i>=7 && i<=14)num=3;
            if(i==15)num=4;
            replace(ans.begin(), ans.end(), v[i], num);            
        }
        for(ll i:ans)cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}