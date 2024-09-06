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
        vector<vector<int>>v(n,vector<int>(n-1));
        map<int,int>mp;
        int x, mx=-1;
        for(int i=0;i<n;i++){
            for(int j=0;j<n-1;j++){
                cin>>v[i][j];
                if(j==0){
                    mp[v[i][j]]++;
                    if(mp[v[i][j]]>1)mx=v[i][j];
                }
            }
        }
        for(int i=0;i<n;i++){
            if(v[i][0]!=mx)x=i;
        }
        cout<<mx<<" ";
        for(int i=0;i<n-1;i++){
            cout<<v[x][i]<<' ';
        }
        cout<<endl;
    }
    return 0;
}