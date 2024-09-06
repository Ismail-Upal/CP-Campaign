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
        int n; cin>>n;
        vector<string>vs;
        vector<int>v(n,0);
        map<string, bool>mp;
        for(int i=0;i<n;i++){
            string s; cin>>s;
            vs.push_back(s);
            mp[s]=true;
        }
        for(int i=0;i<n;i++){
            int sz=vs[i].size();
            for(int j=0;j<sz;j++){
                string a=vs[i].substr(0,j+1);
                string b=vs[i].substr(j+1,sz-j+1);
                if(mp[a] && mp[b]){
                    v[i]=1;break;
                }
            }
        }
        for(int i:v)cout<<i;
        cout<<endl;
    }
    return 0;
}