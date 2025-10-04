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
    int n,m,k; cin>>n>>m>>k;
    vector<int>v(m+1);
    for(int i=0;i<m+1;i++)cin>>v[i];
    vector<vector<int>>mask;
    for(int i=0;i<m+1;i++){
        vector<int>a;
        for(int k=0;k<n;k++){
           if((v[i]>>k)&1)a.push_back(1);
           else a.push_back(0);
        }
        mask.push_back(a);
    }
    vector<int>fdr=mask[m];
    int ans=0;
    for(int i=0;i<m;i++){
        vector<int>a=mask[i];
        int cnt=0;
        for(int k=0;k<n;k++){
            if(a[k]!=fdr[k])cnt++;
        }
        if(cnt<=k)ans++;
    }
    cout<<ans<<endl;
    return 0;
}