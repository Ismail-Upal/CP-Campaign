//https://codeforces.com/problemset/problem/1676/C
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dl double
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    ll t; cin>>t;
    while(t--){
        ll q,n; cin>>q>>n;
        vector<string>v;
        for(int i=0;i<q;i++){
            string s; cin>>s;
            v.push_back(s);
        }
        ll diff=0,ans=INT_MAX;
        for(int i=0;i<q-1; i++){
            for(int j=i+1;j<q;j++){
                diff=0;
                for(int k=0; k<n; k++){
                    string x=v[i];
                    string y=v[j];
                    diff+=abs(x[k]-y[k]);
                }
                ans=min(ans,diff);
            }   
        }
        cout<<ans<<endl;
    }


    return 0;
}